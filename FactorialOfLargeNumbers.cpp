#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> factorial(int n){
	long long size=1,temp,carry=0;
    vector<int> v(1e5+1,0);
    v[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<size;j++){
            temp=(v[j]*i)+carry;
            v[j]=temp%10;
            carry=temp/10;
        }
        while(carry){
            v[size++]=carry%10;
            carry/=10;
        }
        carry=0;
    }
    while(carry){
        v[size++]=carry%10;
        carry/=10;
    }
    v.resize(size);
    reverse(v.begin(),v.end());
    return v;
}
int main(){
    ll n;
    cin>>n;
    vector<int>v=factorial(n);
    for(int i=0;i<v.size();i++){
    	cout<<v[i];
    }
}
