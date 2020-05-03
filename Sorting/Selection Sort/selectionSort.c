#include<stdio.h>
#include<stdlib.h>

void swap(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void selection_sort(int a[], int UB, int LB)
{
    int min;
    for(int i=LB; i<=UB; i++)
    {
        min=a[i];
        int k=i;
        for(int j=i+1; j<=UB; j++)
        {
            if(a[j]<min)
            {
                min=a[j];
                k=j;
            }
        }
        if(k!=i)
            swap(&a[i], &a[k]);
    }
}

int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements of array: ");
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    selection_sort(a, n, 0);
    printf("After sorting: ");
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
}
