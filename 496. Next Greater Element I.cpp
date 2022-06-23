class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> m;
        for(auto n:nums2){
            while(st.size() && st.top()<n){
                m[st.top()]=n;
                st.pop();
            }
            st.push(n);
        }
        vector<int> ans;
        for(int n:nums1) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};
