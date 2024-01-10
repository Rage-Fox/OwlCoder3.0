https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6578257853f92e82bb98713e/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int j=0;
    unordered_map<int,int> mp;
    int ans=0;
    int sum=0;
    while(j<n){
        sum+=arr[j];
        if(mp.find(sum%k)!=mp.end()){
            ans=max(ans,j-mp[sum%k]);
        }
        else{
            mp[sum%k]=j;
        }
        if(sum%k==0){
            ans=max(ans,j+1);
        }
        j++;
    }
    cout<<ans;
}
