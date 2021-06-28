#include<stdio.h>
#include<string.h>
int main(){    
    char line[1000];    
    fgets(line,1000,stdin);    
    int n;    
    scanf("%d",&n);    
    int len = strlen(line);    
    for(int i=0;i<len;i++){    
        if(line[i]>='a'&&line[i]<='z'){    
            // line[i] = line[i]+n;    
            if(line[i]+n>'z'){    
                // line[i]=line[i]-'z'-1+'a';    
                printf("%c",line[i]+n-'z'-1+'a');    
            }    
            else    printf("%c",line[i]+n);    
        }    
        else if(line[i]>='A'&&line[i]<='Z'){    
            // line[i] = line[i]+n;    
            if(line[i]+n>'Z'){      
                printf("%c",line[i]+n-'Z'-1+'A');    
            }    
            else    printf("%c",line[i]+n);    
        }    
        else if(line[i]>='0'&&line[i]<='9'){    
            // line[i] = line[i]+n;    
            if(line[i]+n>'9'){    
                // line[i]=line[i]-'9'-1+'0';    
                printf("%c",line[i]+n-'9'-1+'0');    
            }    
            else    printf("%c",line[i]);    
        }     
        else    printf("%c",line[i]);    
    }    
    // printf("\n");    
}  