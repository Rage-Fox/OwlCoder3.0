https://www.geeksforgeeks.org/problems/remove-k-digits/1
Explanation-> https://leetcode.com/problems/remove-k-digits/solutions/607570/c-solution-8ms-with-detailed-explanation/
class Solution {
  public:
    string removeKdigits(string s, int k) {
        string ans="";
        for(char &c:s){
            while(ans.size() and ans.back()>c and k){
                ans.pop_back();
                k--;
            }
            if(ans.size() or c!='0'){
                ans.push_back(c);
            }
        }
        while(ans.size() and k--){
            ans.pop_back();
        }
        return (ans=="")?"0":ans;
    }
};
