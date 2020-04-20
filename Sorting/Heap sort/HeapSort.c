 #include <stdio.h>

  void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
  }

  void maxHeapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
      largest = left;

    if (right < n && arr[right] > arr[largest])
      largest = right;

    if (largest != i) {
      swap(&arr[i], &arr[largest]);
      maxHeapify(arr, n, largest);
    }
  }


  void heapSort(int arr[], int n) {

    for (int i = n / 2 - 1; i >= 0; i--)
      maxHeapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);

      maxHeapify(arr, i, 0);
    }
  }

  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }


  int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: \n");
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    heapSort(arr, n);
    printf("Sorted array is \n");
    printArray(arr, n);
  }
