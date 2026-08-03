#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    int reversenumber=0;
    int original=n;
   while (n>0){
    int digit=n%10;
    reversenumber=reversenumber*10+digit;
    n=n/10;
   }
    if (original==reversenumber)
        return true;
        else
        return false;
    }


    int main(){
        int num;
        cin>>num;
         if (palindrome(num))
        cout << "Palindrome";
        else
        cout << "Not Palindrome";
        return 0;
    }