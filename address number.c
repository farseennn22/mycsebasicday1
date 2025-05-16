#include<stdio.h>
int main(){
    int num=42;
    int *ptr;
    ptr=&num;
    printf("Address of num:&p\n",ptr);
    printf("value of num using pointer:%d\n",*ptr);
    return 0;
}
Address of num:&p
value of num using pointer:42


=== Code Execution Successful ===
