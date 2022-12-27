#include<iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return 1;
    }
    cout<<"\nN before call: "<<n;

    int fibSum = n + fib(n-1);
    // cout<<"\nN after call: "<<n;
    cout<<"\nfibSUm N after call: "<<fibSum;


    return fibSum;



}

int main(){

    int n=5;
    int result = fib(n);
    cout<<"\nanswer is " <<result;

   
}