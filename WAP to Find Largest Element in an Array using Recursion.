//WAP to Find Largest Element in an Array using Recursion.
#include <stdio.h>
#include<stdlib.h>

void max(int *num, int n, int big)
{
    if (n < 0)
        printf("Biggest element is %d\n", big);
    else
    {
        if (*num > big)
            big = *num;

        max(++num, --n, big);
    }
}

int main()
{
    int n;
    printf("enter the number of element to be entered\n");
    scanf("%d", &n);
    int *a=(int*)malloc(n*sizeof(int));
    int i;

    printf("Enter  the elements numbers\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max(a, n - 1, a[0]);

    return 0;
}
