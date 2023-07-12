#include<stdio.h>
int search (int A[],int key, int size)
{
    int i;
    for (i=0;i<size;i++)
    {
        if (key==A[i])
        return 1;

    }
    return 0;
}
void sort (int a[], int size)
{
    int i,j,temp;
    for (i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
              }
        }       
    }
}
int main()
{
    
    int i,j=0,k=0,temp=-1;
    int A[]={1,3,5,7,9};
    int B[]={2,3,4,5,6,8,10};
    int U[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int C[12];
    printf("A union B is : \n ");
    for (i=0;i<5;i++)
    {
        C[k++]=A[i];

    }
    for (i=0;i<7;i++)
    {
        C[k++]=B[i];
    }
    sort(C,k);
    for (i=0;i<k;i++)
    {
        if (C[i]!=temp)
        printf("%d ",C[i]);
        temp=C[i];
    }
    return 0;
    
}