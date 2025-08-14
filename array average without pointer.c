#include<stdio.h>
void main(){
    printf("Enter the array size\n");
    int i,size;
    scanf("%d",&size);
    float sum=0.0;
    float arr[size];
    for(i=0;i<size;i++){
        scanf("%f",&arr[i]);
    sum=sum+arr[i];}
    printf("Avg is %f\n",sum/size);
}

