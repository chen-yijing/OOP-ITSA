#include<stdio.h>    
#include<string.h>    
int main(){    
    int a,b;    
    while(scanf("%d %d",&a,&b)!=EOF){    
        if(a==1&&b>=21) printf("Aquarius\n");    
        else if(a==2&&b<=18)    printf("Aquarius\n");    
        else if(a==2&&b>=19)    printf("Pisces\n");    
        else if(a==3&&b<=20)    printf("Pisces\n");    
        else if(a==3&&b>=21)    printf("Aries\n");    
        else if(a==4&&b<=20)    printf("Aries\n");    
    
        else if(a==4&&b>=21)    printf("Taurus\n");    
        else if(a==5&&b<=21)    printf("Taurus\n");    
    
        else if(a==5&&b>=22)    printf("Gemini\n");    
        else if(a==6&&b<=21)    printf("Gemini\n");    
    
                else if(a==6&&b>=22)    printf("Cancer\n");    
        else if(a==7&&b<=22)    printf("Cancer\n");    
    
                else if(a==7&&b>=23)    printf("Leo\n");    
        else if(a==8&&b<=23)    printf("Leo\n");    
    
                else if(a==8&&b>=24)    printf("Virgo\n");    
        else if(a==9&&b<=23)    printf("Virgo\n");    
    
                else if(a==9&&b>=24)    printf("Libra\n");    
        else if(a==10&&b<=23)    printf("Libra\n");    
    
                else if(a==10&&b>=24)    printf("Scorpio\n");    
        else if(a==11&&b<=22)    printf("Scorpio\n");    
    
        else if(a==11&&b>=23)    printf("Sagittarius\n");    
        else if(a==12&&b<=21)    printf("Sagittarius\n");    
    
        else if(a==12&&b>=22)    printf("Capricorn\n");    
        else if(a==1&&b<=20)    printf("Capricorn\n");    
    }    
}  