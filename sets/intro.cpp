#include<bits/stdc++.h>
using namespace std;
int main(){
set<int> s1;
set <int> s2={1,2,3,2,1};
for (int x: s2){
cout<<x<<" " ;
}
cout<<endl;
s1.insert(s2.begin(),s2.end());
for (int x: s1){
cout<<x<<" ";
}
}







