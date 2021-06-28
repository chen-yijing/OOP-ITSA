#include<stdio.h>  
#include<string.h>  
  
int main(){  
    int num1,num2;  
    while(scanf("%d%d",&num1,&num2)!=EOF){  
        for(int i=0;i<num2;i++){  
            for(int j=0;j<num1;j++){  
                printf("*");  
            }  
            printf("\n");  
        }  
    }  
}