#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m=1e9+7;
ll BinaryExponentiation(ll a,ll b){
	ll ans=1;
	while(b){
		if(b&1){
			b=b-1;
			ans=(((ans%m)*(a%m))%m);
		}
		else{
			b=b/2;
			a=(((a%m)*(a%m))%m);
		}
	}
	return ans%m;
}
ll inverse(ll b){
	return (BinaryExponentiation(b,m-2)%m);
}
int main(){
    ll a,b;
    cin>>a>>b;
    cout<<"Multiplicative Inverse of b: "<<inverse(b)<<endl;
    cout<<"Finding (a/b)%m is:"<<endl;
    cout<<(((a%m)*(inverse(b)%m))%m);
}
