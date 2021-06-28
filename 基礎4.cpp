#include<iostream>
using namespace std;  
  
int main(){  
    int time1, time2;  
    int time3, time4;  
    int timesum = 0, sum;  
    while(cin>>time1>>time2){  
        timesum = 0;  
        sum = 0;  
        cin>>time3>>time4;  
        timesum = time3*60+time4-(time1*60+time2);  
          
        if(timesum>=120){  
            sum+=(120/30)*30;  
            if(timesum>=240){  
                sum+=4*40;  
                sum+=((timesum-240)/30)*60;  
            }     
            else{  
                sum+=((timesum-120)/30)*40;  
            }  
        }  
        else{  
            sum+=(timesum/30)*30;  
        }  
        cout<<sum<<endl;  
    }  
    return 0;  
}  
