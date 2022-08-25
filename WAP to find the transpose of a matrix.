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
    int *transpose=(int *)malloc((r*c)*sizeof(int));
    printf("enter the element\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i*c+j]);
        }
    }
    printf("Orignal Matrix\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\t",a[i*c+j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            transpose[i*c+j]=a[j*r+i];
        }
        printf("\n");
    }
    printf("Transpose of matrix is\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d\t",transpose[i*c+j]);
        }
        printf("\n");
    }
}
