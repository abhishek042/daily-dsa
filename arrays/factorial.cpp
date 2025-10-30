#include "../testcases.h"
typedef long long ll;

double stirlingFactorial(double n) {
    const double PI = 3.14159265358979323846;
    const double E  = 2.71828182845904523536;
    double part1 = sqrt(2 * PI * n);
    double part2 = pow(n / E, n);
    return part1 * part2;
}

int fact(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}