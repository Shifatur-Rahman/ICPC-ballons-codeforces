#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int n, sum, total, i, j;
//char str;

while(t--){
    cin>>n;
    char str[n];
    sum = 0;

   for (i=0; i<n; i++){
        cin>>str[i];
        sort(str, str+n);

        if(str[i] != str[i+1] || n<2){
            sum+=2;
        }
        else{
            sum+=1;
        }
    }

        cout<<sum<<endl;

        // new logic apply

       /* for(i=0; i<n; i++){
            cin>>str[i];
            for(j=0; j<n; j++{
                if(str[i] == str[j]){

                }
            }
        }   */

}
}
