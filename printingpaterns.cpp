#include <iostream>
using namespace std;
int main(){
    // for(int i = 1; i < 4; i++){
    //     for (int j = 3; j >0; j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // int i=0,j=0,k=1;
    // while(i<3){
    //     while(j<3){
    //         cout<<k;
    //         k++;
    //         j++;
    //     }
    //     j=0;
    //     cout<<endl;
    //     i++;
    // }

    // int i=0,n;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int i=0,n;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // int i=0,n,count=1;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<count;
    //         count++;
    //     }
    //     cout<<endl;
    // }

    // int i=0,n;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<<j+i;
    //     }
    //     cout<<endl;
    // }

    // int i,n;
    // cin>>n;
    // for (i=1;i<=n;i++){
    //     for(int j=i;j>0;j--){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // cin>>n;
    
    // int i,j,n;
    // cin>>n;
    // for(i=65;i<=n+65;i++){
    //     for(j=0;j<n;j++){
    //         char p=i+j;
    //         cout<<p;
    //     }
    //     cout<<endl;
    // }

    // int i,j,n;
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     for(j=0;j<i;j++){
    //         char c=i+64;
    //         cout<<c;
    //     }
    //     cout<<endl;
    // }

    // FIBONACHI SERIES NIGGA!!
    // int n;
    // cin>>n;
    // long long int a=0,b=1,c;
    // cout<<a<<" "<<b;
    // for(int i=0; i<n; i++){
    //     cout<<" "<<a+b;
    //     c=a+b;
    //     a=b;
    //     b=c;
    // }
    // cin;

    //  BC Prime number :(
    
    // unsigned long long int n;
    // cin>>n;
    // for(unsigned long long int p=2;p<=n;p++){

    //     bool Flag=false;
    //     for(unsigned long long int i=2; i<=p/2 ;i++){
    //         if(p%i==0){
    //             Flag=true;
    //             break;
    //         }
    //     }
    //     if(Flag==false){
    //         cout<<p<<" Is a prime number"<<endl;
    //     }
    // else{
    //     cout<<n<<" Is NOT PRIME"<<endl;
    // }
    // }
    // uint32_t n=00000000000000000000000000001011;
    // int count=0;
    // while(n!=0){
    //     n=n>>1;
    //     count++;
    // }
    // cout<<n%;

    // int n=-2147483648;
    // if(n<INT_MIN){
    //         cout<<abs(n);
    //     }
    // cout<<INT_MIN;
    
    // unsigned long long expo=1,num=0;
    // cin>>x;
    // int temp=x;
    // while(temp!=0){
    //         expo*=10;
    //         temp/=10;
    //         cout<< temp <<" "<< expo <<endl; 
    //     }
    //     expo/=10;
    //     while(expo!=0){
    //         num+=((x%10)*expo);
    //         x/=10;
    //         expo/=10;
    //         cout<< num <<" "<< expo <<endl; 
    //     }


    // double sol=1;
    //     if (n == INT_MAX) return (x == 1) ? 1 : (x == -1) ? -1 : 0;
    //     if (n == INT_MIN) return (x == 1 || x == -1) ? 1 : 0;
    //     if(n>=1){
    //         for(int i=0;i<n;i++){
    //             sol*=x;
    //         }
    //         return sol;
    //     }
    //     else{
    //         for(int i=0;i<abs(n);i++){
    //             sol*=x;
    //         }
    //         sol=1/sol;
    //         return sol;
    //     }

    // decimal to binary
    // unsigned long long expo=1,num=0,bit=0,binary=0;
    // cin>>num;
    // while(num!=0){
    //     bit = num%2;
    //     binary = binary + bit * expo;
    //     num/=2;
    //     expo*=10;
    // }
    // cout<<binary;

    // Binary to decimal
    
    // unsigned long long int bin,weight=1,decimal=0;
    // cin>>bin;
    // while(bin!=0){
    //     decimal += ((bin%10) * weight);
    //     bin/=10;
    //     weight*=2;
    // }
    // cout<<decimal;
    
    return 0;
}