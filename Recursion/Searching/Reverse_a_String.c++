#include<iostream>
#include <string.h>
using namespace std;

void revString(string &revs,int i,int j){
    if(i>j){
        return ;
    }
    swap(revs[i],revs[j]);
    i++;
    j--;
    revString(revs,i,j);

}

// void revInt(int num){
//     if(num==0){
//         return ;
//     }
//     int digits = num%10;
//     num = num/10;
//     cout<<digits;
//     revInt(num);
// }

int main(){

    string revs = "abcde";

    revString(revs,0,revs.length()-1);

    cout<<revs;




    // int num = 1234;
    
    // revInt(num);    
   
}