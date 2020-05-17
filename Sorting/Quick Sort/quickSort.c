#include<stdio.h>

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;
}



int partition(int arr[], int LB, int UB){

    int pivot = arr[LB];
    int start = LB;
    int end = UB;

    while(start < end){

        while(arr[start] <= pivot)
            start++;

        while(arr[end] > pivot)
            end--;

        if(start < end)
            swap(&arr[start], &arr[end]);
    }

    swap(&arr[LB], &arr[end]);
    return end;
}



void quickSort(int arr[], int left, int right){

    int pivot;
    if(left < right){
        pivot = partition(arr, left, right);
        quickSort(arr, left, pivot-1);
        quickSort(arr, pivot+1, right);
    }
}


int main(){

    int n;
    printf("Enter number of terms: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: \n");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("\nBefore sorting: \n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
    quickSort(arr, 0, n-1);
    printf("\nAfter sorting: \n");
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
}
