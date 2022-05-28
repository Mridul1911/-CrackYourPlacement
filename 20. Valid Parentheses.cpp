// stack we will store the brackets in map
class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> ump={ {'(',-3}, {'{',-2}, {'[',-1}, {')',3}, {'}',2}, {']',1}};
        stack<int> st;
        for(auto b:s){
            if(ump[b]<0) st.push(b);
            else{
                if(st.empty()) return false;
                char top=st.top();
                if(ump[top]+ump[b]!=0 ) return false;
                st.pop();
            }
        }
        if(st.empty()) return true;
        return false;
    }
};
