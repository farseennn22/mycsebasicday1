#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks\n");
    scanf("%d",&marks);
    if(marks>=84)
    printf("Grade A");
    else if(marks>=70)
    printf("Grade B");
    else if(marks>=50)
    printf("Grade c");
    else
    printf("Grade D");
    return 0;
}
enter the marks
70
Grade B

=== Code Execution Successful ===
