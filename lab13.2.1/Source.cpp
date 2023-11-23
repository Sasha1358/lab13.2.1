#include <iostream>

#define SQRT(x) (x)*(x)
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main()
{
    double x, y, z, w;

    std::cout << "x = ";
    std::cin >> x;

    std::cout << "y = ";
    std::cin >> y;

    std::cout << "z = ";
    std::cin >> z;

#if defined(CONDITION1)
    // Код для першої умови 
    w = MAX((SQRT(x + y)), (SQRT(x - z)));
#elif defined(CONDITION2)
    // Код для друої умови 
    w = MIN((x * y) + (y * z), ((z * x) + (y * z)) * ((z * x) + (y * z)));
#else
    //  За замовчуванням використовується перша умова 
    if (z > 3)
        w = MAX(SQRT(x + y), SQRT(x - z));
    else if (z <= 3)
        w = MIN(((x * y) + (y * z)), SQRT((z * x) + (y * z)));
#endif

    std::cout << "Result: " << w << std::endl;

    return 0;
}
