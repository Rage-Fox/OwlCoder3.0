Question and Answer-> https://www.codingbroz.com/number-of-factors-codechef-solution/
#include<bits/stdc++.h>
#define N 1000001
using namespace std;
vector<int>Primes(N, 1);
void sieve(){
	Primes[0]=Primes[1]=0;
    for(int i = 2; i*i <=N; i++){
    	if(Primes[i]==1){
        	for(int j = i*i; j<=N; j+= i){
            	Primes[j] = 0;
        	}
    	}
    }
}
int main() {
	sieve();
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int div[n];
        for(int i=0;i<n;i++){
        	cin>>div[i];
        }
        unordered_map<int, int>mp;
        for(auto&it:div){
            if(Primes[it] == true){
                mp[it]++;
            }
            else{
                for(int i = 2; i<it; i++){
                    if(it%i == 0){
                        int temp = it;
                        if(Primes[i]){
                            while(temp%i == 0){
                                temp = temp/i;
                                mp[i]++;
                            }
                        } 
                    }
                }
            }
        }
        long long ans = 1;
        for(auto&it:mp){
            ans *= (it.second + 1);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
