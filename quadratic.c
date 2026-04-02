#include <stdio.h>
#include <math.h>
int main()
{
    int b, a, c, x, x1, x2, d;
    printf("enter the value of a = ");
    scanf("%d", &a);
    printf("enter the value of b = ");
    scanf("%d", &b);
    printf("enter the value of c = ");
    scanf("%d", &c);
    d = (b * b) - (4 * a * c);
    if (d >= 0)
    {
        d=sqrt(d);
        x1 = ((-b) + d) / 2;
        x2 = ((-b) - d) / 2;
        printf("the root of the given quadractic equation is %d  %d", x1, x2);
    }
    else
        printf("the root of the given quadractic equation are imaginary");
}
