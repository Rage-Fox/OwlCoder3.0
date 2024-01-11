#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=1e6+5;
vector<ll> primes(MAXN,1);
void generate_seive(){
	primes[0]=primes[1]=1;
	for(int i=2;i*i<=MAXN;i++){
		if(primes[i]==1){
			for(int j=i*i;j<=MAXN;j+=i){
				primes[j]=0;
			}
		}
	}
}
int main(){
    ll q;
    cin>>q;
    generate_seive();
    while(q--){
    	ll n;
    	cin>>n;
    	if(primes[n]){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }
}
