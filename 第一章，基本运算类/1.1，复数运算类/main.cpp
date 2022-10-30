#include "complex.h"

int main()
{
    int i;
    double a,b;
    complex c1, c2,c3,c, p[5];
    std::cin >> a >>b;
    c1 = complex(a, b);
    std::cout << "c1="; c1.prt(); std::cout << std::endl;

    std::cin >> a >>b;
    c2 = complex(a, b);
    std::cout << "c2="; c2.prt(); std::cout << std::endl;

    std::cin >> a >>b;
    c3 = complex(a, b);
    std::cout << "c3="; c3.prt(); std::cout << std::endl;

    c = c1 + c2;
    std::cout << "c1 + c2="; c.prt(); std::cout << std::endl;

    c = c1 - c2;
    std::cout << "c1 - c2="; c.prt(); std::cout << std::endl;

    c = c1 * c2;
    std::cout << "c1 * c2="; c.prt(); std::cout << std::endl;

    c = c1 / c2;
    std::cout << "c1 / c2="; c.prt(); std::cout << std::endl;

    c = c3.cpower(-3);
    std::cout << "c3的-3次方"; c.prt(); std::cout << std::endl;
    std::cout << "c3的5次方根" << std::endl;
    c3.croot(5, p);

    for (i = 0; i < 5; i++){
        p[i].prt();
        std::cout << std::endl;
    }
    c = c3.cexp();
    std::cout << "cexp(c3)="; c.prt(); std::cout << std::endl;
    c = c3.clog();
    std::cout << "clog(c3)="; c.prt(); std::cout << std::endl;
    c = c3.csin();
    std::cout << "csin(c3)="; c.prt(); std::cout << std::endl;
    c = c3.ccos();
    std::cout << "ccos(c3)="; c.prt(); std::cout << std::endl;

    return 0;
}