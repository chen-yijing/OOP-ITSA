#include<stdio.h>  
  
int func(int num){  
    if(num==0||num==1)  return num+1;  
    return func(num-1)+func(num/2);  
}  
int main(){  
    int num;  
    while(scanf("%d",&num)!=EOF){  
        printf("%d\n",func(num));  
    }  
} 