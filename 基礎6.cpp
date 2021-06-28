#include<iostream>  
using namespace std;

int main(){  
    int input;  
    while(cin>>input){  
        if(input>=3&&input<=5)  cout<<"Spring"<<endl;  
        else if(input>=6&&input<=8) cout<<"Summer"<<endl;  
        else if(input>=9&&input<=11)   cout<<"Autumn"<<endl;  
        else if(input==12||(input<=2&&input>=1))    cout<<"Winter"<<endl;   
    }  
    return 0;  
}  