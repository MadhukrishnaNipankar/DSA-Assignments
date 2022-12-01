#include <stdio.h>

void displayMatrix(int matrix[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int matrix1[][2],int matrix2[][2],int sum[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}


void main()
{
    int matrix1[2][2];
    int matrix2[2][2];
    int matrix3[2][2];

    printf("Enter Elements of Matrix1 (2X2) : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\nEnter Elements if Matrix2 (2X2) : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }


    // Addition 
    printf("\nAddition Matrix is : \n");
    addMatrices(matrix1,matrix2,matrix3);
    displayMatrix(matrix3);
}