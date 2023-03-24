#include <stdio.h>

int main() {
  int arr[] = {10, 56, 78, 34, 51, 23, 79, 44, 36, 55, 98};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Perform bubble sort
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] < arr[j + 1]) {
        // Swap the elements
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  // Print the sorted array
  printf("Sorted array in descending order: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
//output
Sorted array in descending order: 98 79 78 56 55 51 44 36 34 23 10 
