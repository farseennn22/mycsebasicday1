#include<stdio.h>
int main()
{
    int i, n,t1=0,t2=1,t3;
    printf("Enter the number of terms");
    scanf("%d",&n);
    printf("fibonacci sequence is:%d,%d",t1,t2);
    for(i=3;i<=n;i++)
    {
        t3=t1+t2;
        printf(",%d",t3);
        t1=t2;
    }
    return 0;
}
Enter the number of terms2
fibonacci sequence is:0,1

=== Code Execution Successful ===
