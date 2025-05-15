#include<stdio.h>
#include<string.h>
int main(){
    char name[10];
    printf("enter name");
    scanf("%s",name);
    printf("%s\n",name);
    int length=strlen(name);
    printf("%d\n",length);
    strcpy(name,"afra");
    printf("%s\n",name);
    int cmp=strcmp("afra","farseen");
    printf("%d\n",cmp);
    strcat(name,"is coder");
    printf("%s",name);
    return 0;
}
enter name
afra
afra
4
afra
-1
afrais coder

=== Code Execution Successful ===
