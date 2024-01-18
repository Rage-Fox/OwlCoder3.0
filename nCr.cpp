#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
// Formula: nCr=(n!)/((r!)*((n-r)!))
int nCr(int n, int r){
    int num = 1;
    // 6C2=(6*5*4*3*2*1)/((2*1)*(4*3*2*1))=(6*5)/(2*1)
    for(int i = n - r + 1 ; i <= n ; i++){
        num *= i;
    }
    for(int i = 1 ; i <= r; i++){
        num /= i;
    }
    return num;
}
// Binary Exponentiation
int pow(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans *= a;
            ans %= mod;
        }
        a *= a;
        a %= mod;
        b >>= 1;
    }
    return ans;
}
const int N = 1e5+1;
vector<int>fact(N);
vector<int>invfact(N);
void preFact(){
    fact[0] = 1;
    invfact[0] = 1;
    for(int i = 1 ; i < N ; i++){
        fact[i] = fact[i-1] * i;
        fact[i] %= mod;
        invfact[i] = pow(fact[i], mod-2);
    }

}
int main(){
    int t;
    cin >> t;
    preFact();
    while(t--){
        int n , r;
        cin >> n >> r;
        // Traditional method.
        cout<<nCr(n,r)<<endl;
        // For a given number of testcases, efficient to store pre computed factorial values.
        cout<<fact[n]/(fact[r]*fact[n-r])<<endl;
        // If given modulus value, find the inverse and perform mod for multiplication instead of doing the same fore division.
        cout<<(fact[n] % mod * invfact[r] % mod * invfact[n-r] %mod)%mod;
    }
}
