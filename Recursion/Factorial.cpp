#include <bits/stdc++.h>

using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}
int main(){
    int i=0;
    cin>>i;
    cout<<fact(i);
}