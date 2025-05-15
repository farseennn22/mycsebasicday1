#include<stdio.h>
int main(){
    int num,reverse =0,rem,org;
    printf("Enter the number");
    scanf("%d",&num);
    org=num;
    while(num!=0) {
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    if(org==reverse){
        printf("the number is pallindrome");
    }
        else{
            printf("not pallindrome");
        }
    }
Enter the number
121
the number is pallindrome

=== Code Execution Successful ===
