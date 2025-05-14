#include<stdio.h>
int main(){
    int n,arr[n],sum=0,i;
    printf("enter the number of elements in array:n");
    scanf("%d",&n);
    printf("Enter the number of elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[n]);
        sum+=arr[n];
        printf("%d\n",sum);
    }
}
enter the number of elements in array:n4
Enter the number of elements
1 2 3 4 
1
3
6
10


=== Code Execution Successful ===
