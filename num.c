#include<stdio.h>
void swap(int,int);
int main(){
    int a;
    int b;
    printf("Enter a number:");
    scanf("a=%d b=%d",&a,b);
    swap(a,b);
    printf("The swap is:%d",swap);
}
void swap(int a,int b){
    return a,b;
}