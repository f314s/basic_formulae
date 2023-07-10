#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;

        printf("enter the value of a:\n");
        scanf("%d", &a);
        printf("now enter the value of b\n");
        scanf("%d", &b);
        printf("(%d + %d)^2\n", a, b);
        printf("%d^2 + 2*%d*%d + %d^2\n", a, a, b, b);
        printf("%d + %d + %d\n", a*a, 2*a*b, b*b);
        printf("%d", a*a + 2*a*b + b*b);
    return 0;
}
