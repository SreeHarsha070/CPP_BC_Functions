#include<bits/stdc++.h>
using namespace std;
int prime_check(int n,int i){
    if(n%i==0){
        return 0;
    }else{
        return prime_check(n,i+2);
    }
}
int main(){
    int n,res;
    cin>>n;
    if(n==2){
        cout<<"2 is prime\n";
    }
    else if((n==1)|(n==0)){
        cout<<"0 and 1 cant be checked for prime\n";
    }
    else{
    res=prime_check(n,3);
    }    
    cout<<res;
}
