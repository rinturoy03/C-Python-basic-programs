#include <stdio.h>
void main()
{
    int arr_sze,i,j,temp;
    printf("enter the size of the array to be sorted:");
    scanf("%d",&arr_sze);
    int arr[arr_sze];
    printf("Enter the arr:");
    for(i=0;i<arr_sze;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(i=0;i<arr_sze;i++){
        printf("%d\t",arr[i]);
    }
    for(i=0;i<arr_sze-1;i++){
        for(j=0;j<arr_sze-i-1;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorting\t");
    for(i=0;i<arr_sze;i++){
        printf("%d\t",arr[i]);
    }

}
