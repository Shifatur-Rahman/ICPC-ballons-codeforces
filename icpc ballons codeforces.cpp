#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){

int t, n;
string str;
cin>>t;
int stock;

while(t--){
    cin>>n;
    cin>>str;
    sort(str.begin(), str.end());
    stock=2;
    for(int i=1; i<n; i++){
        if(str[i-1] != str[i]){
            stock+=2;
        } else{
            stock+=1;
        }
    }
  cout<<stock<<endl;
}


}
