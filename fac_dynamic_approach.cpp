#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int dp[1000];
int fact(int n){
    if((n==0)|(n==1)){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    return (dp[n]=n*fact(n-1));
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++) dp[i]=-1;
    for(int i=0;i<=n;i++) cout<<dp[i]<<" ";
    cout<<"\n";
    cout<<fact(n);
    return 0;
}
