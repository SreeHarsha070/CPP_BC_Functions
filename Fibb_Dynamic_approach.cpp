#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int dp[1000];
int fibbo(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n]=fibbo(n-1)+fibbo(n-2);
}
int main(){
    int n,res;
    cin>>n;
    for(int i=0;i<=n;i++) dp[i]=-1;
    res=fibbo(n);
    for(int i=0;i<=n;i++) cout<<dp[i]<<" ";
    cout<<"\n";
    cout<<res;
    return 0;
}
