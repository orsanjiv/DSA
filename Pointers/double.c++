#include<iostream>
using namespace std;

int main(){

    int i = 5;
    int* ptr = &i;
    cout<<"\nptr address: "<<ptr; //ptr holding the value of i
    cout<<"\nptr value: "<<*ptr;

    // creating double pointer
    int** ptr2 = &ptr;
    cout<<"\nptr2 Address: "<<ptr2;
    cout<<"\nptr Address: "<<*ptr2; //ptr holding the address of i
    cout<<"\nptr2 value: "<<**ptr2;
   
}