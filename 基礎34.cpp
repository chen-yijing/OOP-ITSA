#include<stdio.h>  
  
int main(){  
    int a,b;  
    float output;  
    while(scanf("%d %d",&a,&b)!=EOF){  
        if(b==1){  
           output =(a-80)*0.7;  
        }  
        else{  
            output =(a-70)*0.6;  
        }  
        printf("%.1f\n",output);  
    }  
    return 0;  
}  