#include <stdio.h>    
#include <string.h>    
    
int main()    
{    
    char str[100];    
    
    while(scanf("%s", str) != EOF)    
    {    
        int len = strlen(str), i;    
        int flag = 1;    
        for(i = 0 ; i < len / 2 ; i++)    
        {    
            if(str[i] != str[len - i - 1])    
            {    
                flag = 0;    
                break;    
            }    
        }    
        if(flag)    
            printf("YES\n");    
        else printf("NO\n");    
    }    
    return 0;    
}  