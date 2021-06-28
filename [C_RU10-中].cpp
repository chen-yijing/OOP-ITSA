#include<stdio.h>  
  
int climbStairs(int n) {  
        if (n == 0) {  
            return 0;  
        }  
          
        if (n == 1) {  
            return 1;  
        }  
          
        if (n == 2) {  
            return 2;  
        }  
  
        return climbStairs(n - 1) + climbStairs(n - 2);  
    }  
  
int main(){  
    int cnt,num;  
    while(scanf("%d",&num)!=EOF){  
        printf("%d\n",climbStairs(num));  
    }      
}  