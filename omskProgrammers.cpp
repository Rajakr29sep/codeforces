#include<bits/stdc++.h>
using namespace std;    



int main()
{
    int t;
     cin>>t;
     while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        int ans =INT_MAX;
        int i =0;
        while(a!=b){
            if(a>b){
                swap(a,b);
            }
            ans = min(ans,abs(b-a)+i);
            b = b/x;
            i++;
        }
        cout<<min(ans,i)<<endl;
     }
     return 0;
}