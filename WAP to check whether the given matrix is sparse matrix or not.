#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int r;
    int c; 
    int count=0;
    printf("Enter row of the matrix: ");
    scanf("%d", &r);
    printf("Enter column of the matrix: ");
    scanf("%d",&c);
    int *a=(int *)malloc((r*c)*sizeof(int));
    printf("enter the element\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i*c+j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i*c+j]==0)
            {
                count=count+1;
            }
        }
    }
    if(count>((r*c)/2))
    {
        printf("SPARSE MATRIX\n");
    }
    else{
        printf("not a sparse matrix");
    }
}
