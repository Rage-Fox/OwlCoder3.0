#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN=1e6+5;
vector<ll> primes(MAXN);
void sieve_prime_factorization(){
	primes[0]=primes[1]=0;
	for(int i=2;i<MAXN;i++){
		primes[i]=i;
	}
	for(int i=2;i*i<=MAXN;i++){
		if(primes[i]==i){
			for(int j=i*i;j<=MAXN;j+=i){
				if(primes[j]==j){
					primes[j]=i;
				}
			}
		}
	}
}
ll sum_of_powers_of_factors_in_prime_factorization(ll n){
	ll c=0;
	while(n!=1){
		n=n/primes[n];
		c++;
	}
	return c;
}
int main(){
    sieve_prime_factorization();
    ll n;
    cin>>n;
   	cout<<sum_of_powers_of_factors_in_prime_factorization(n);
}
