

#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;

    }

    cout<<"\nbefore small: "<<n;

    int smallProblem = fact(n-1);
    int largeProblem = n*smallProblem;
    cout<<"\nafter small: "<<n;

    return largeProblem;
}

int main(){

    int n;
    cin>>n;

    int result = fact(n);

    cout<<"\nResult is: "<<result;
   
}