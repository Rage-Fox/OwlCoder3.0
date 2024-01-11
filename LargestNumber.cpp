https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/659d17722bd0d6fa1931bb17/
Explanation-> https://www.geeksforgeeks.org/largest-number-possible-after-removal-of-k-digits/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maxnumber(ll n, ll k)
{
    // Generate the largest number after removal of the least K digits one by one
    for (ll j = 0; j < k; j++) {
        ll ans = 0;
        ll i = 1;
        // Remove the least digit after every iteration
        while (n / i > 0) {
            // Store the numbers formed after removing every digit once
            ll temp = (n / (i * 10)) * i + (n % i);
            i *= 10;
            ans = max(ans, temp);
        }
        // Store the largest number remaining
        n = ans;
    }
    return n;
}
int main(){
    ll n,k;
    cin>>n>>k;
    cout<<maxnumber(n,k);
}
