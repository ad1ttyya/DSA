#include<stdio.h>
void main(){
    int Arr[10]={85,95620,52,95,295,5,6,1,2,8};
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            int a=0;
            if(Arr[j+1]<Arr[j]){
                a=Arr[j+1];
                Arr[j+1]=Arr[j];
                Arr[j]=a;
            }
        }
    }
    for(int sex=0;sex<10;sex++){
        printf("%d\n",Arr[sex]);
    }
}