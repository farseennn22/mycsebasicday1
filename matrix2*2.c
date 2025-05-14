#include <stdio.h>
int main() {
    int i, j;
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &row, &col);
    int a[row][col], b[row][col], c[row][col];
    printf("Enter the elements of matrix A:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of matrix B:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    printf("The sum of the matrices is:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%6d ", c[i][j]);
        }
        printf("\n");
    }
}
Enter the number of rows and columns: 2
2
Enter the elements of matrix A:
1
2
3
4
Enter the elements of matrix B:
5
6
7
8
The sum of the matrices is:
     6      8 
    10     12 


=== Code Execution Successful ===
