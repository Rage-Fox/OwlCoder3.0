#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    vector<vector<int>> pre(n,vector<int>(32,0));
    for(int i=31;i>=0;i--){
        for(int j=0;j<n;j++){
            if(j==0){
            	if((arr[j] & (1<<i))){
                	pre[j][i]=1;
                }
                continue;
            }
            if(arr[j]&(1<<i)){
                pre[j][i]=1+pre[j-1][i];
            }
            else{
                pre[j][i]=pre[j-1][i];
            }
        }
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        int ans=0;
        vector<int> temp(32,0);
        for(int i=0;i<31;i++){
            if(a==0){
                if(pre[b][i]>0){
                	ans|=(1<<i);
                }
                continue;
            }
            temp[i]=pre[b][i]-pre[a-1][i];
            if(temp[i]>0){
        		ans|=(1<<i);
            }
        }
        cout<<ans<<endl;
    }
}
