https://www.codechef.com/COOK126C/problems/PTUPLES
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=1e6+5;
vector<ll> primes(MAXN,1);
void generate_seive(){
	primes[0]=primes[1]=0;
	for(int i=2;i*i<=MAXN;i++){
		if(primes[i]==1){
			for(int j=i*i;j<=MAXN;j+=i){
				primes[j]=0;
			}
		}
	}
}
ll test(ll n){
    // As we have to obtain a "C" value which is prime and most of the cases odd, we can only obtain odd if we are able to add one even and one odd.
    // As there is only one even "2", generate pairs with it and check whether the difference is prime and available.
    ll c=0;
    for(int i=3;i<=MAXN and i+2<=n;i++){
        if(primes[i] and primes[i+2]){
            c++;
        }
    }
    return c;
}
int main(){
    ll q;
    cin>>q;
    generate_seive();
    while(q--){
    	ll n;
    	cin>>n;
    	cout<<test(n)<<endl;
    }
}
