#include<stdio.h>  
#include<string.h>  
int main(){  
    int cnt[26]={0};  
    char line[1000];  
    fgets(line,1000,stdin);  
    int len = strlen(line);  
    for(int i=0;i<len;i++){  
        if(line[i]>='a'&&line[i]<='z'){  
            int index = line[i] - 'a';  
            cnt[index]++;  
        }  
        else if(line[i]>='A'&&line[i]<='Z'){  
            int index = line[i] - 'A';  
            cnt[index]++;  
        }  
    }  
    for(int i=0;i<=25;i++){  
        // if(cnt[i]==0)   continue;  
        if(i==25)   printf("%d\n",cnt[i]);  
        else    printf("%d ",cnt[i]);  
    }  
}  