#include<iostream>  
#include<string>
using namespace std;

int main()  
{  
    string str;  
  
    while(cin>>str)  
    {  
        int len = str.size(), i;  
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
            cout<<"YES"<<endl;  
        else cout<<"NO"<<endl;
    }  
  
  
    return 0;  
}  