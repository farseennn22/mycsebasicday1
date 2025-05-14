#include<stdio.h>
int i;
int af_fact(int n,int fact){
    if(n==0){
        printf("1");
    }
    else if (n<0){
    printf("Enter positive number");
    }
    else{
        for(i=1;i<n;i++){
            fact *=i;
        }
    }
    return fact;
}
int main(){
    int c;
    c=af_fact(5,1);
    printf("%d",c);
}
24

=== Code Execution Successful ===
