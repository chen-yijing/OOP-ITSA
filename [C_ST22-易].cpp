#include<stdio.h>  
#include<string.h>  
  
int main(){  
    char line[1000];  
    while(scanf("%s",line)!=EOF){  
        int len = strlen(line);  
        for(int i=len-1;i>=0;i--){  
            if(line[i]>='A'&&line[i]<='Z'){  
                printf("%c",line[i]-'A'+'a');  
            }  
            else if(line[i]>='a'&&line[i]<='z'){  
                printf("%c",line[i]-'a'+'A');  
            }  
            else{  
                printf("%c",line[i]);  
            }  
        }  
        printf("\n");  
    }  
}  