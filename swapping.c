#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two integers\n:");
    printf("a =");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping;\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
enter two interests
:a =2 7
b = after swapping;
a = 7
b = 2


=== Code Execution Successful ===
