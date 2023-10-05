#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    int n;
    int x;
    printf("Enter the order of the polynomial \n");
    scanf("%d", &n);
    int *poly = (int *)malloc((n + 1) * sizeof(int));
    printf("Enter the coefficients of the polynomials \n");

    for (int i = 0; i < n + 1; i++)
    {
        scanf("%d", &poly[i]);
    }
    printf("Enter the value of x \n");
    scanf("%d", &x);

    int sum = 0;

    for (int i = 0; i < n + 1; i++)
    {
        sum = sum + (poly[i] * pow(x, (n - i)));
    }

    printf("The polynomial is \n");
    for (int i = 0; i < n; i++)
    {

        printf("%d*x^(%d) + ", poly[i], (n - i));
    }
    printf("%d.  \n", poly[n]);

    printf("The summation of the polynomial for the value x %d is %d .\n", x, sum);
}
