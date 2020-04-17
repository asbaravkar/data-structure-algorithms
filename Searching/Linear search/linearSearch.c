#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int UB, int LB, int key)
{
    arr[UB+1] = key;
    int i = LB;
    while(arr[i] != key)
    {
        i++;
    }
    if(i == UB+1)
        return -1;
    else
        return i;
}


int main()
{
    int n, x, ans;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched: ");
    scanf("%d",&x);
    ans = linearSearch(arr, n-1, 0, x);
    if(ans == -1)
        printf("Element not exist");
    else
        printf("Element %d exist at position %d",x,ans+1);
    return 0;
}
