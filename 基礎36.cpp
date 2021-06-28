#include<stdio.h>  
  
int main()  
{  
    int year;  
    while(scanf("%d", &year)!=EOF)  
    {  
        if (1900 <= year && year <= 2099)  
        {  
            if ((year % 4 == 0 && year % 100 !=0)||year % 400 ==0)  
            printf("Bissextile Year\n");  
            else  
            printf("Common Year\n");  
        }  
    }  
    return 0;  
}  