#include<iostream>
using namespace std;

int linSearch(int arr[],int size,int key){
    if(arr[]==key){
        cout<<"key is found";
        return ;
    }

    return linSearch(arr[]+ 1,size,key);


}

int main(){
   
   int arr[5] = {1,2,3,4,5};
   int key = 3;
   int found = linSearch(arr,5,key);
   cout<<found;
}