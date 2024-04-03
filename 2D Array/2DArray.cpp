#include <bits/stdc++.h>

using namespace std;

bool isPresent(int arr[][3], int row, int col, int key){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] == key)
                return true;
        }
    }
    return false;
    
}

void rowSum(int arr[][3], int row, int col){
    for (int i = 0; i < row; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < col; j++)
        {
            rowsum+=arr[i][j];
        }
        cout<<"The sum of the "<<i+1<<" Row is "<<rowsum<<endl;
    }
}

int largestRowSum(int arr[][3], int row, int col){
    int max = 0;
    for (int i = 0; i < row; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < col; j++)
        {
            rowsum+=arr[i][j];
        }
        if (max<rowsum)
            max = rowsum;
        // cout<<"The sum of the "<<i+1<<" Row is "<<rowsum<<endl;
    }
    return max;
}


int main(){
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }

    cout<<"The element is "<<isPresent(arr,3,3,333)<<endl;
    rowSum(arr,3,3);
    cout<<"Max rowsum is "<<largestRowSum(arr,3,3)<<endl;
    return 0;
}