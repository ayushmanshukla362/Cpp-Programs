#include<bits/stdc++.h>
using namespace std;
int countdigits(int n){
    if (n==0)
    return 1;
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}
    int main(){
        int num;
        cin>>num;
        cout<<countdigits(num);
        return 0;
    }
    /*
                          METHOD-2
 include <bits/stdc++.h>
    using namespace std;
    int countdigits(int n){
        n=abs(n);
        if(n==0)
        return 1;
    int count=(int)(log10(n)+1);   (int)(...)

This is called type casting (or type conversion).
(int)3.089905 becomes 3

    return count;
}
      int main(){
        int num;
        cin>>num;
        cout<<countdigits(num);
        return 0;
    }
        */

    
