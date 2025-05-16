 #include<stdio.h>
int main() {
    int arr[10]={1,2,3,4},n=4,i,temp,*start,*end;
    start=arr;// first index start=0
    end=arr+n-1;//last index ens=3
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
        for(i=0;i<n;i++){
            printf("%d",arr[i]);
        }
    }
4321

=== Code Execution Successful ===
