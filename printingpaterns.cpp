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

    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            char c=i+64;
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}