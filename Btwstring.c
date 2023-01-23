#include<stdio.h>
void main(){
    int i=0;
    char a[100];
    char b[100];
    char c[100];
    scanf("%s",&a);
    scanf("%s",&b);
    while(a[i]!='\0'){
        c[i]=(a[i]+b[i])/2;
        printf("%c",c[i]);
        i++;
    }
}