#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n;
	cin>>n;
	vector<ll> arr(n);
	for(ll i=0;i<n;i++){
		cin>>arr[i];
	}
	// Powerset generation
	ll p=1<<n;
	for(ll i=0;i<p;i++){
		for(ll j=0;j<n;j++){
			if(i&(1<<j)){
				cout<<arr[j]<<" ";
			}
		}
		cout<<endl;
	}
}
