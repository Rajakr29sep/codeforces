#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
     while(t--){
        int n ;
         cin>>n;
            vector<int> v(4*n);
            if(n%2 ==0){
                int count = 2;
                for(int i=0; i<4*n; i+=8){
                    v[i]=count-1;
                    v[i+1]=count;
                    v[i+2]=count;
                    v[i+3]= count-1;
                    v[i+4]=count-1;
                    v[i+5]=count;
                    v[i+6]=count-1;
                    v[i+7]=count;
                    count+=2;
                }
            }
            else{
                
                v[0]=3;
                v[1]=3;
                v[2]=2;
                v[3]=1;
                v[4]=1;
                v[5]=2;
                v[6]=1;
                v[7]=2;
                v[8]=2;
                v[9]=3;
                v[10]=1;
                v[11]=3;

                int count = 5;
                for(int i=12; i<4*n; i+=8){
                    v[i]=count-1;
                    v[i+1]=count;
                    v[i+2]=count;
                    v[i+3]= count-1;
                    v[i+4]=count-1;
                    v[i+5]=count;
                    v[i+6]=count-1;
                    v[i+7]=count;
                    count+=2;
                }
            }
            for(int i=0; i<4*n; i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
     }
     return 0;
}