#include<iostream>  
#include<string.h>
using namespace std; 

int main(){  
    int a,b;  
    while(cin>>a>>b){  
        if(a==1&&b>=21) cout<<"Aquarius"<<endl;  
        else if(a==2&&b<=18)    cout<<"Aquarius"<<endl;  
        else if(a==2&&b>=19)    cout<<"Pisces"<<endl;   
        else if(a==3&&b<=20)    cout<<"Pisces"<<endl;   
        else if(a==3&&b>=21)    cout<<"Aries"<<endl;   
        else if(a==4&&b<=20)    cout<<"Aries"<<endl;    
  
        else if(a==4&&b>=21)    cout<<"Taurus"<<endl;   
        else if(a==5&&b<=21)    cout<<"Taurus"<<endl; 
  
        else if(a==5&&b>=22)    cout<<"Gemini"<<endl;  
        else if(a==6&&b<=21)    cout<<"Gemini"<<endl;  
  
                else if(a==6&&b>=22)    cout<<"Cancer"<<endl;   
        else if(a==7&&b<=22)    cout<<"Cancer"<<endl; 
  
                else if(a==7&&b>=23)    cout<<"Leo"<<endl;  
        else if(a==8&&b<=23)    cout<<"Leo"<<endl;   
  
                else if(a==8&&b>=24)    cout<<"Virgo"<<endl;  
        else if(a==9&&b<=23)    cout<<"Virgo"<<endl;  
  
                else if(a==9&&b>=24)    cout<<"Libra"<<endl;   
        else if(a==10&&b<=23)    cout<<"Libra"<<endl;     
  
                else if(a==10&&b>=24)    cout<<"Scorpio"<<endl;   
        else if(a==11&&b<=22)    cout<<"Scorpio"<<endl;  
  
        else if(a==11&&b>=23)    cout<<"Sagittarius"<<endl;  
        else if(a==12&&b<=21)    cout<<"Sagittarius"<<endl;   
  
        else if(a==12&&b>=22)    cout<<"Capricorn"<<endl;  
        else if(a==1&&b<=20)    cout<<"Capricorn"<<endl;  
    }  
}  