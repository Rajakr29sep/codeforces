#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool flag = false;
        for(int i =1; i<=n-k; i++){
            if(s[i-1]=='1'){
                s[i-1]=!s[i-1];
                s[i+k-1]=!s[i+k-1];
            }
        }
     
            for(int i =0; i<n; i++){
                if(s[i]=='1'){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
    }
    return 0;
}