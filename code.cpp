#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int cnt=0;
    for(int i=2;i<n;i++){
        int j=((i%2==0)?1:2);
        for(j;j<i;j+=2){
            int c=i*i+j*j;
            if(c>n){
                break;
            }
            if(gcd(j,i)==1){
                cnt+=(n/c);
            }
        }
    }
    cout<<cnt<<'\n';
}
