#include<stdio.h>
int main(){
    int x = 10,y =20;
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After swap:x=%d,y=%d\n",x,y);
    return 0;
}
After swap:x=20,y=10


=== Code Execution Successful ===
