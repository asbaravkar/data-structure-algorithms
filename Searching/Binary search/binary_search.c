#include<stdio.h>

int binarySearch(int arr[], int key, int left, int right){
    if (left > right)
        return -1;
    int middle = (left + right)/2;

    if(arr[middle]==key)
        return middle;
    else if(arr[middle] > key)
        return binarySearch(arr, key, left, middle-1);
    else
        return binarySearch(arr, key, middle+1, right);

}

int main(){
    int n;
    printf("Enter number of terms: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements one by one: \n");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    int key;
    printf("Enter element to be searched: \n");
    scanf("%d",&key);
    int result = binarySearch(arr, key, 0, n-1);

    if (result==-1)
        printf("Element does not exist");
    else
        printf("Element present at position %d", result+1);
}
