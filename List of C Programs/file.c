#include <stdio.h>

int main()
{
  int matrix[2][2], matrix2[2][2], result[2][2];

  printf("Enter the elements of the matrix 1: \n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Element [%d][%d]: ", (i + 1), (j + 1));
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("Enter the elements of the matrix 2: \n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Element [%d][%d]: ", (i + 1), (j + 1));
      scanf("%d", &matrix2[i][j]);
    }
  }

  printf("Matrix1: \n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  printf("Matrix2: \n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ", matrix2[i][j]);
    }
    printf("\n");
  }

  printf("Addition of the matrices: \n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ", matrix[i][j] + matrix2[i][j]);
    }
    printf("\n");
  }

  printf("Multiplication of the matrices: \n");

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      result[i][j] = 0;

      for (int k = 0; k < 2; k++)
      {
        result[i][j] += matrix[i][k] * matrix2[k][j];
      }
      printf("%d", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}