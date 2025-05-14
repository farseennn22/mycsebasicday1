#include<stdio.h>
void even(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%6d",arr[i]);
        }
    }
}
int main(){
    int n[]={12,21,14,20,26,8,10,19};
    int size=4;
    printf("Even numbers in the array\n");
}
Even numbers in the array
12 20 8 10

=== Code Execution Successful ===
