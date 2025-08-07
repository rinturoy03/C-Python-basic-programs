/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
void main(void){
    int n,i=2,j,flag,cnt=1;
    printf("Enter n:");
    scanf("%d",&n);
    printf("prime numbers are 1\n,");
    //for(i=2;i<(n+1);i++){
    while (cnt<n){
        flag=0;
        for(j=2;j<=floor(sqrt(i));j++){
            if((i%j)==0)
            flag=1;
        }
        if (flag==0){
            printf("prime number are %d\n", i);
            cnt++;
    } i++;
}}