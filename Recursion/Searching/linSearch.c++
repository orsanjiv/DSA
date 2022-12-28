#include<iostream>
using namespace std;

bool linSearch(int arr[],int size,int key){
    if(size==0){
        return false ;
    }
    if(key==arr[0]){
        return true;
        // cout<<"key is found";
    }
    linSearch(arr+1,size-1,key);


}

int main(){
   
   int arr[5] = {1,2,3,4,5};
   int key = 6;
   bool found = linSearch(arr,5,key);
   if(found){
    cout<<"key is found ";
   }
   else{
    cout<<"key is not found ";
   }
   
}