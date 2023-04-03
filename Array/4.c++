#include<iostream>
using namespace std;

int main(){
    int size=6;
    int arr[size] = {1,2,3,4,5,6};
    // swap(arr[0],arr[size-1]);
    // swap(arr[1],arr[size-1]);
    // swap(arr[2],arr[size-1]);
    // swap(arr[3],arr[size-1]);
    // swap(arr[4],arr[size-1]);

    for(int i =0;i<=size-1;i++){
        swap(arr[i],arr[size-1]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

}