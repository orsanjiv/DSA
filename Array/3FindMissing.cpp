//https://practice.geeksforgeeks.org/problems/missing-element-of-ap2228/1?page=2&difficulty[]=0&status[]=solved&category[]=Arrays&sortBy=submissions

#include<iostream>
using namespace std;

void findMissing(int arr[],int size){

    int temp = arr[1] - arr[0];
    for(int i=0;i<size;i++){
        if(temp!=arr[i+1]-arr[i]){
            cout<<temp+arr[i];
            return;
        }
    }
    
}

int main(){
    int arr[6] = {2,4,6,8,12,14};
    findMissing(arr,6);   
}