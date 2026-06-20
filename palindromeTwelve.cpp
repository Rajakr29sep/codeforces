#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(long long n){
    string s = to_string(n);
    int l = 0;
    int r = s.size()-1;
    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;

        if(n==10){
            cout<<"-1"<<endl;
            continue;
        }

        
        long long mod = n%12;


        if(mod == 11){
            cout<<mod<<" "<<n-11<<endl;
        }
        else if(mod == 10){
            cout<<"22"<<" "<<n-22<<endl;
        }
        else if(mod<10){
            cout<<mod<<" "<<n-mod<<endl;
        }
        
    }
    return 0;
}