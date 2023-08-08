#include<stdio.h>
void main(){
    int Array[10]={85,95620,52,95,295,5,6,1,2,8};
    int i,Temp;
    for (int j = 0; j < 9; j++)
    {
        for(i=0;i<9;i++){
            if (Array[i]>Array[i+1])
            {
                Temp=Array[i];
                Array[i]=Array[i+1];
                Array[i+1]=Temp;
            }
            else {
                continue;
            }
        }    
    }
    for (int k = 0; k < 10; k++)
    {
        printf("%d ",Array[k]);
    }
    
}