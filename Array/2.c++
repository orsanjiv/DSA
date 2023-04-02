#include<iostream>
using namespace std;

int main(){
    int N=5;
    int A[5]={1,2,3,4,5};
    int B[5]={2,1,3,5,4};

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(A[i]==B[j]){
                cout<<"true"<<endl;
            }
            else{
                cout<<"False"<<endl;
            }
        }
        
    }
    //    cout<<"False";
   
}