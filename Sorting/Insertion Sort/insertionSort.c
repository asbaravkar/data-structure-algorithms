#include <stdio.h>

int insertionSort(int arr[], int n){

    for(int i=1; i<n; i++){
        int k = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>k){
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = k;
    }
}

int main(){

    int n;
    printf("Enter number of elements \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements one by one: \n");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("Elements before sorting: \n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    insertionSort(arr, n);
    printf("\nElements after sorting array: \n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    return 0;
}
