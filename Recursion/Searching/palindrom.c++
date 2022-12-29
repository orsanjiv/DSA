// if string and its reversed string are equal then this is palindrome

#include<iostream>
using namespace std;

bool CheckPalindrome(string res , int i ,int j){
    if(i>j){
        return true;
    }
    if(res[i] != res[j]){
        return false;
    }
    else{
        return CheckPalindrome(res,i+1,j-1);
    }
    
}




int main(){
   string str = "aabbaa";
   bool isPalindrome = CheckPalindrome(str,0,str.length()-1);

   if(isPalindrome){
    cout<<"Its is palindrome";
   }
   else{
    cout<<"Not palindrome";
   }
  

}