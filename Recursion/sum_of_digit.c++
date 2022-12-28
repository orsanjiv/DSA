// Write a recursive function that calculates the sum of the digits of a given number. For example, the sum of the digits of the number 123 is 6 (1 + 2 + 3).


#include<iostream>
using namespace std;

int sumOfDigits(int num){
    if(num==0){
        return 0;
    }
   int ans =  (num%10) + sumOfDigits(num/10);

   return ans;

            //    alternative solution
            //  int sum = 0;
            //   while (n > 0) {
            //     sum += n % 10;
            //     n /= 10;
            //   }
            //   return sum;
}

int main(){

    int num;
    cout<<"Number: ";
    cin>>num;

    int res = sumOfDigits(num);
    cout<<"\nans: "<<res;
   
}