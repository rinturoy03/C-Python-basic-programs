#include<stdio.h>
void swap(int *m,int *n){
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}
void main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("before swap a=%d and b=%d",a,b);
    swap(&a,&b);
    printf("\nafter swap a=%d and b=%d",a,b);
}
