#include<stdio.h>
int main(){
    int n,i,c=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if (n==0){
        printf("1");
    }
    else{
        for(i=1;i<=n;i++){
            c*=i;
        }
        printf("factorial is %d",c);
    }
}
    Enter the value of n
5
factorial is 120

=== Code Execution Successful ===
