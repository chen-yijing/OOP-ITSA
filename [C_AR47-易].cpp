#include<stdio.h>  
#include<string.h>  
  
void *reverse(int *arr){  
    int tmparr[10];  
    for(int i=0;i<10;i++){  
        tmparr[10-i-1] = arr[i];  
    }  
    for(int i=0;i<10;i++){  
        arr[i] = tmparr[i];  
    }  
}  
  
void display(int *arr){  
    for(int i=0;i<10;i++){  
        if(i==9)    printf("%d\n",arr[i]);  
        else    printf("%d ",arr[i]);  
    }  
}  
  
int main(){  
    int arr[10];  
    for(int i=0;i<10;i++){  
        scanf("%d",&arr[i]);  
    }  
    reverse(arr);  
    display(arr);  
}