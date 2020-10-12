#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        a = a*a-a+2;
        printf("%d\n",a);
    }
    return 0;
}