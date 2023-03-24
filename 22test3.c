#include <stdio.h>

int main() {
  int m, n;

  printf("Enter the number of rows (M): ");
  scanf("%d", &m);

  printf("Enter the number of columns (N): ");
  scanf("%d", &n);

  int A[m][n], B[m][n], result[m][n];

  // Input matrices A and B
  printf("\nEnter elements of matrix A:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("Enter element A[%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  printf("\nEnter elements of matrix B:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("Enter element B[%d][%d]: ", i, j);
      scanf("%d", &B[i][j]);
    }
  }

  // Add matrices A and B
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      result[i][j] = A[i][j] + B[i][j];
    }
  }

  // Print the resulting matrix
  printf
//output
Enter the number of rows (M): 2
Enter the number of columns (N): 3

Enter elements of matrix A:
Enter element A[0][0]: 1
Enter element A[0][1]: 2
Enter element A[0][2]: 3
Enter element A[1][0]: 4
Enter element A[1][1]: 5
Enter element A[1][2]: 6

Enter elements of matrix B:
Enter element B[0][0]: 7
Enter element B[0][1]: 8
Enter element B[0][2]: 9
Enter element B[1][0]: 10
Enter element B[1][1]: 11
Enter element B[1][2]: 12

The resulting matrix C = A + B is:
8 10 12
14 16 18
