#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll RecursiveBinaryExponentiation(ll a,ll b){
	if(b==0){
		return 1;
	}
	ll ans=RecursiveBinaryExponentiation(a,b/2);
	if(b&1){
		return a*ans*ans;
	}
	else{
		return ans*ans;
	}
}
ll BinaryExponentiation(ll a,ll b){
	ll ans=1;
	while(b){
		if(b&1){
			b-=1;
			ans*=a;
		}
		else{
			b/=2;
			a=a*a;
		}
	}
	return ans;
}
int main(){
    ll a,b;
    cin>>a>>b;
    ll ans=BinaryExponentiation(a,b);
    cout<<ans;
}
