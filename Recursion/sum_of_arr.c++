#include<iostream>
using namespace std;

int arrSum(int arr[],int size){
    if (size == 0)
    {
        return 0;
    }
    return arr[0] + arrSum(arr+1,size-1);

    
}

int main(){
   
   int arr[5] = {1,2,3,4,9};
   int size = 5;

   int ans = arrSum(arr,size);
   cout<<"\nans: "<<ans;
   

}
