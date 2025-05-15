#include<stdio.h>
int main(){
    int a=6;
    int*ptr=&a;
    printf("value of the pointer%d\n",a);
    *ptr=10;
    printf("new of x%d",a);
}
    value of the pointer6
new of x10

=== Code Execution Successful ===
