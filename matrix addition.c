#include <stdio.h>

int main() {
  int m, n, i, j;

  printf("Enter number of rows and columns: ");
  scanf("%d %d", &m, &n);

  int matrix1[m][n], matrix2[m][n], sum[m][n];

  printf("Enter elements of first matrix:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("Enter elements of second matrix:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  // Displaying the result
  printf("Sum of matrices:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}

