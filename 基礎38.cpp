#include<stdio.h>    
    
int main(){    
    int time1, time2;    
    // int time3, time4;    
    float timesum = 0, summersum,othersum;    
    while(scanf("%d",&time1)!=EOF){    
        summersum = 0;  
        othersum = 0;  
        if(time1>=120){    
            summersum+=120*2.10;    
            othersum+=120*2.10;  
            if(time1>=330){    
                summersum+=210*3.02;    
                othersum+=210*2.68;  
                if(time1>=500){    
                    summersum+=170*4.39;    
                    othersum+=170*3.61;  
                    if(time1>=700){    
                        summersum+=200*4.97;    
                        othersum+=200*4.01;  
                        summersum+=(time1-700)*5.63;    
                        othersum+=(time1-700)*4.50;  
                    }     
                    else{  
                        summersum+=(time1-500)*4.97;    
                        othersum+=(time1-500)*4.01;  
                    }  
                }       
                else{  
                    summersum+=(time1-330)*4.39;    
                    othersum+=(time1-330)*3.61;  
                }  
            }     
            else{  
                summersum+=(time1-120)*3.02;    
                othersum+=(time1-120)*2.68;  
            }      
        }    
        else{    
            summersum+=time1*2.10;  
            othersum+=time1*2.10;  
        }    
        printf("Summer months:%.2f\nNon-Summer months:%.2f\n",summersum,othersum);    
    }    
    return 0;    
} 