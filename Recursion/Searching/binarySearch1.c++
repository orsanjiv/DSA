//  check weather the array is sorted is not
#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size == 0 || size == 1){
        return true;

    }
    
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1,size-1);
        return ans;
    }
}

int main(){

    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,7,6,3};
    int size = 5;
    int sorted1 = isSorted(arr1,size);
    int sorted2 = isSorted(arr2,size);

    cout<<"For arr1: "<<sorted1<<endl;
    cout<<"For arr2: "<<sorted2;
    
   
}