#include<iostream>
using namespace std;

void print(int *ptr){
    cout<<"value: "<<*ptr<<endl;
    cout<<"Address: "<<ptr;
}

void updates1(int *ptr){
    *ptr = *ptr + 1;
}

int main(){

    int num = 5;
    int *ptr = &num;
    cout<<"Before: ";
    print(ptr);

    updates1(ptr);

    cout<<"\nAfter: ";
    print(ptr);   
   
}