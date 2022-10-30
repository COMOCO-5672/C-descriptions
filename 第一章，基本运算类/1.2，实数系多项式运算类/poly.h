#include <iostream>
#include <fstream>
#include <cmath>

class Poly
{
private:
    int N;
    double *p;
public:
    Poly(int nn = 0, double *pp = nullptr)
    {
        N = nn;
        p = pp;
    }
    ~Poly(){};
    void input();
    double poly_value(double);
    void poly_mul(Poly&, Poly&);
    void poly_div(Poly&, Poly&, Poly&);
};

void Poly::input()
{
    int i;
    std::cout << "多项式系数:" << std::endl;
    for (i = 0; i< N +1; i++)
    {
        std::cout << "p(" << i << ")=";
        std::cin >> p[i];
    }
}

double Poly::poly_value(double x) 
{
    int k;
    double u;
    u = p[N];
    for (k = N -1; k >= 0; k--) 
    {
        u = u * x + p[k];
    }
    return u;
}

void Poly::poly_mul(Poly& q, Poly& s)
{
    int i,j;
    for (i = 0; i < s.N; i++)
    {
        s.p[i] = 0.0;
    }
    for (i=0; i <= N; i++)
    {
        for (j=0; j <= q.N; j++)
        {
            s.p[i+j] = s.p[i+j] + p[i] * q.p[j];
        }
    }
}

void Poly::poly_div(Poly& q, Poly& s, Poly& r)
{
    int i,j,mm,ll;
    for (i = 0; i < s.N; i++)
    {
        s.p[i] = 0.0;
    }
    if (q.p[q.N] + 1.0 == 1.0)
    {
        return ;
    }

    ll = N;
    for (i = (s.N) + 1; i >=1; i--)
    {
        s.p[i-1] = p[ll] / (q.p[q.N]);
        mm = ll;
        for (j = 1; j<= q.N; j++)
        {
            p[mm-1] = p[mm-1]- s.p[i-1] * (q.p[(q.N)-j]);
        }
        ll = ll-1;
    }
    
    for (i = 0; i < r.N; i++)
    {
        r.p[i] = p[i];
    }
    return;
}


