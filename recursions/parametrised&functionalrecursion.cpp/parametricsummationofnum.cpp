// a parametric recursion in which the answers carry the answer with every step
#include<bits/stdc++.h>
using namespace std;
int summation(int i , int sum){
    if (i<1)
    return ;
    summation(i-1,sum+1);
}
int main(){
    int n;
    cin>>n;
    summation(3,0);
    return 0;
}