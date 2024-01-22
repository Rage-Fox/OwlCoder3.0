https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6577124424635ce34ca5b9c7/

#include<bits/stdc++.h>
using namespace std;
int splitArray(int nums[] ,int n, int k) {
    int l=0,r=0;
    for(int i=0;i<n;i++){
            l=max(l,nums[i]);
            r+=nums[i];
    }
    int ans;
    while(l<=r){
        int mid=(l)+(r-l)/2;
        int c=1;
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }
            else{
                sum=nums[i];
                c++;
            }
        }
        if(c<=k){
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<splitArray(nums,n,k);
}
