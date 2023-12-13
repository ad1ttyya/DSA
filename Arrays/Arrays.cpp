#include<iostream>
#include<algorithm>

using namespace std;

void printArray(int Array[],int size){
    for (int i = 0; i < size; i++)
        cout<<Array[i]<<" ";
    cout<<endl;
}
void maxMin(int arr[],int size){
    int max=-1,min=-1;
    max=arr[0];
    min=arr[2];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        else if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Maximum element is "<<max<<" Min value "<<min<<endl;
}

int linearSearch(int Array[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        if (key==Array[i])
        {
            return i;
        }
    }
    return -1;
}

void reverseArray(int Array[],int size){
    int t1;
    for (int i = 0; i <= size/2; i++){
        // cout<<i<<" "<<size-i<<"\t";
        t1=Array[i];
        Array[i]=Array[size-i-1];
        Array[size-i-1]=t1;
    }
}

void swapAlternatice(int Array[],int size){
    int temp;
    for (int i = 1; i < size; i+=2)
    {
        swap(Array[i-1],Array[i]);
        // temp=Array[i-1];
        // Array[i-1]=Array[i];
        // Array[i]=temp;
    }
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    printArray(arr,sizeof(arr)/4);
    // maxMin(arr,sizeof(arr)/4);
    // cout<<linearSearch(arr,sizeof(arr)/4,-999);
    // reverseArray(arr,sizeof(arr)/4);
    // printArray(arr,sizeof(arr)/4);
    swapAlternatice(arr,sizeof(arr)/4);
    printArray(arr,sizeof(arr)/4);

    return 0;
}