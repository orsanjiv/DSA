#include<iostream>
using namespace std;

bool binSearch(int *arr ,int start,int end, int key){
    if(start>end){
        return false;
    }

    int mid = start +(end-start)/2;

    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binSearch(arr,mid+1,end,key);
    }
    if(arr[mid] > key){
       return binSearch(arr,start,mid-1,key);
    }

}

int main(){

    int arr[5] = {1,2,3,4,5};

    int key = 1;
    
    bool ans = binSearch(arr,0,4,key);

    if(ans){
        cout<<"key is present";
    }
    else{
        cout<<"key is not found";
    }

   
}