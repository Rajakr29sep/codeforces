#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v;
        for(int i=0; i<n; i++){
            long long x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(),greater<long long>());
        if(n==2){
            cout<<v[0]<<" "<<v[1]<<endl;
            continue;
        }
        
        bool flag = false;
        for(int i=1; i<n-1; i++){
            int mod = v[i-1]%v[i];
            if(v[i+1]!=mod){
                flag = true;
            }
        }
        if(flag){
            cout<<"-1";
        }
        else{
          cout<<v[0]<<" "<<v[1];
        }
        cout<<endl;
    }
}