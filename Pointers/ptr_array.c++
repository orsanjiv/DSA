// pointer in array data structure

// int arr[i] = *(arr+i);
// or int i[arr] = *(i+arr);



#include<iostream>
using namespace std;

int main(){
   int arr[5] = {1,2,3,4,5};
//    cout<<arr<<endl;  //arr = arr[0]
//    cout<<&arr[0]<<endl; 
//    cout<<&arr[1]<<endl; 
//    cout<<&arr[2]<<endl; 
//    cout<<&arr[3]<<endl; 
//    cout<<&arr[4]<<endl; 

//    int *ptr = &arr[4];
//    cout<<"prt: "<<ptr<<endl;
//    cout<<"prt value: "<<(*ptr);



    // int i=3;
    // cout<<"value: "<<i[arr]<<endl;
    // cout<<"address: "<<&i[arr]<<endl;
    // cout<<"address: "<<&(i[arr]);


    int i=2;
    cout<<"value before cchanging the index: "<<*(arr+i)<<endl;
    cout<<"address: " <<(arr+i)<<endl;
    cout<<"value after changing the index: " <<*(arr+i+1)<<endl;
    cout<<"address: " <<(arr+i+1)<<endl;
    
    

}