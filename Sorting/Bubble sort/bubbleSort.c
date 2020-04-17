#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int UB, int LB)
{
    int i,j,k,temp,flag;
    k=temp=0;
    for(i=LB; i<UB; i++)
    {
        flag = 0;
        for(j=LB; j<UB-k; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            flag = 1;
        }
        if(flag == 0)
            break;
        k++;
    }
}

int main()
{
    int n,i;
    printf("Enter number of elements to insert: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements to sort: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting: ");
    for(i=0; i<n; i++)
        printf("%d ",arr[i]);
    bubbleSort(arr, n-1, 0);

    printf("\nSorted list: ");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}
