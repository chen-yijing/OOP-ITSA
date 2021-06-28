#include<stdio.h>  
#include<string.h>  
int main() {  
    char line[1000000];  
    while(scanf("%s",line)!=EOF){  
        int len = strlen(line);  
        for(int i=0;i<len;i++){  
            if(i==len-1)    printf("%c\n",line[i]);  
            else    printf("%c   ",line[i]);  
        }  
        // printf("\n");  
    }  
}  