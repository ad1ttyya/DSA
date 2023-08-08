#include<stdio.h>
void main(){
    int Arr[10],Ub=10,Lb=0,Mi=5,input;
    printf("Enter the elements of the array \n");
    for(int j=0;j<10;j++){
        scanf("%d",&Arr[j]);
    }

    scanf("%d",&input);

    while(Lb<=Ub){
        if(input==Arr[Mi]){
            printf("%d",Mi);
            break;
        }
        else if(input>Arr[Mi]){
            Lb=Mi+1;
            Mi=Lb+Ub/2;
        }
        else if(input<Arr[Mi]){
            Ub=Mi-1;
            Mi=Lb+Ub/2;
        }
        else{
            printf("No element matches \n");
        }

    }
}