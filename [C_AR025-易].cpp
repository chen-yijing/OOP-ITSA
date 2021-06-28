#include<stdio.h>  
#include<string.h>  
int main(){  
    int cnt[200]={0};  
    char line[1000];  
    scanf("%s",line);  
    int len = strlen(line);  
    for(int i=0;i<len;i++){  
        int index = line[i];  
        cnt[index]++;  
    }  
    for(int i=200-1;i>=0;i--){  
        if(cnt[i]==0)   continue;  
        printf("%d %d\n",i,cnt[i]);  
    }  
}  