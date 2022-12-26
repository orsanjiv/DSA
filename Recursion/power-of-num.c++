#include<iostream>
using namespace std;

int power(int n){

    if(n==0){
        return 1;
    }
    // cout<<"\n before f: "<<n;
    // int first = power(n-1);
    // int second = n * first;
    // cout<<"\n after s: "<<second;

    return n * power(n-1);

    // return second;


}

int main(){

    int n;
    cin>>n;

    int result = power(n);
    cout<<"\npower of 2 "<<result;
   
}