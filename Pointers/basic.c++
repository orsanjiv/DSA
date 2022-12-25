// basic pointer syntax

#include<iostream>
using namespace std;

int main(){
   int num = 10;
   int *ptr = &num;

   cout<<"value of num: "<<num<<endl;
   cout<<"address of num (ptr): "<<ptr<<endl;
   cout<<"value print using ptr: "<<*ptr<<endl;
}