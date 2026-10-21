#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;

    double x = a / b;
    double y = (double)a/b;

    printf("x = %f\n", x);
    printf("y = %f\n", y);

    return 0;
}