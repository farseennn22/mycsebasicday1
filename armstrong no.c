#include<stdio.h>
#include<math.h>
int main(){
    int num,res=0,rem,org;
    printf("Enter the number");
    scanf("%d",&num);
    org=num;
    while(num!=0) {
        rem=num%10;
        res+=rem*rem*rem;
        num=num/10;
    }
    if(org==res){
        printf("the number is armstrong");
    }
        else{
            printf("the number is not armstrong");
        }
    }
Enter the number153
the number is armstrong

=== Code Execution Successful ===
