#include<stdio.h>
int row,col;
int af[2][4]={
    {1,2,3},
    {3,4,5},
};
int main() {
    for (row=0;row<2;row++)
    {
    for(col=0;col<3;col++)
    {
        printf("%d",af[row][col]);
    }
    return 0;
    }
}
123

=== Code Execution Successful ===
