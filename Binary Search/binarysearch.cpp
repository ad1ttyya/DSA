#include<iostream>

using namespace std;

int BinarySearch(int Array[],int size,int key){
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;

    while(start <= end){
        if (Array[mid] == key)
        {
            return mid;
        }
        if (Array[mid] > key)
        {
            end = mid - 1;
        }
        else{
            start = mid + 1;
            // mid = (start + end)/2;
        }
        mid = (start + end)/2 ;
    }
    return -1;
}


int main(){
    int arr[]={1,2,3,4,5,6};
    int arr2[]={1,2,3,4,5};
    int key;
    cin>>key;
    cout<<BinarySearch(arr,6,key);
    return 0;
}