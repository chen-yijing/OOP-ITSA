  
#include<stdio.h>  
#include<string.h>  
  
int main(){  
    char target[128],line[512];  
    scanf("%s %s",target,line);  
    char *ptr = line;  
    int cnt = 0;  
    while((ptr = strstr(ptr,target))!=NULL){  
        cnt++;  
        ptr++;  
    }  
    printf("%d\n",cnt);  
}  