#include<stdio.h>
int main()
{
    int num,i=1;
    printf("Enter the value of n:");
    scanf("%d",&num);
    while(i<=10)
    {
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }
    return 0;
}
Enter the value of n:6
6*1=6
6*2=12
6*3=18
6*4=24
6*5=30
6*6=36
6*7=42
6*8=48
6*9=54
6*10=60


=== Code Execution Successful ===
