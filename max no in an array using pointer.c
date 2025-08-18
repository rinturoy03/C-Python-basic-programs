#include<stdio.h>
int * max_no(int *ptr,int n)
{
	int max =*(ptr);
    int indx=0,i;
    for(i=1;i< n;i++){
    if (max <*(ptr+i)){
        max = *(ptr+i);
        indx = i;
    }}
    return (ptr + indx);
}
void main(){
    printf("Enter no of elemnts\n");
    int i,size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter elemnts\n");
    for(i=0;i<size;i++){
        scanf("%d",(arr+i));       
    }
    printf("The max value is  %d at %p\n", * (max_no(arr,size)),max_no(arr,size));
}
