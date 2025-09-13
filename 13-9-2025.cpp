#include<bits/stdc++.h>
using namespace std;

long long fibonacci(int n){
    if(n==0) return 0;
    if(n==1)return 1;
    
    long long prev2=0 , prev1= 1 , curr=0;
    
    for(int i=2; i<=n; i++){
        curr= prev1+prev2;
        prev2=prev1;
        prev1=curr;
    }
    return prev1;
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Fibonacci("<<n<<")="<<fibonacci(n)<<endl;
    return 0;
}
