#include<iostream>

using namespace std;

int findPivot(int Array[], int size){
    int s=0, e=size-1, mid = s + (e-s)/2;
    while(s<e){
        if(Array[mid]>=Array[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}



int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,0};
    cout<<findPivot(arr,10);
    return 0;
}