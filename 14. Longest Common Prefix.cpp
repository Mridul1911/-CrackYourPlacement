class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        int n=strs[0].size();
        for(int i=0;i<n;i++){
            for(auto& s:strs){
                if(i==s.size() || s[i]!=strs[0][i]) return res;
            }
            res.push_back(strs[0][i]);
        }
        return res;
    }
};
