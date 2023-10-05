//WAP using function to find frequency of occurrence of numbers in an array.
#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int n, i, j, c;
    printf("Enter Number of Elements in Array :\n");
    scanf("%d", & n);
    printf("Enter the  numbers :\n");
    int *input=(int*)malloc(n*sizeof(int));
    int *count=(int*)malloc(n*sizeof(int));
    // Read array elements
    for (i = 0; i < n; i++) 
    {
        scanf("%d", & input[i]);
        count[i] = -1;
    }
    for (i = 0; i < n; i++) 
    {
        c = 1;
        for (j = i + 1; j < n; j++) 
        {
            if (input[i] == input[j]) 
            {
                count[j] = 0;
                c++;
            }
        }
        if (count[i] != 0)
         {
            count[i] = c;
        }
    }
    // Print c of each element
    for (i = 0; i < n; i++) 
    {

        if (count[i] != 0) 
        {
            printf("number %d occurs %d time \n", input[i], count[i]);
        }
    }
    return 0;
}
