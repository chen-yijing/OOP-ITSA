#include<stdio.h>  
#include<string.h>  
  
int main(){  
    int cnt;  
    scanf("%d",&cnt);  
    char line[1000];  
    for(int i=0;i<cnt;i++){  
        scanf("%s",line);  
        int len = strlen(line);  
        for(int i=len-1;i>=0;i--){  
            printf("%c",line[i]);  
        }  
        printf("\n");  
    }  
}