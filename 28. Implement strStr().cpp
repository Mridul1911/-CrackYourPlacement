class Solution {
public:
    bool check(string a,string b){
        return a==b;
    }
    int strStr(string haystack, string needle) {
        if(haystack==needle) return 0;
        int n = needle.size();
        int m = haystack.size();
        for(int i=0;i<=m-n;i++){
            if(check(haystack.substr(i,n),needle)) return i;
        }
        return -1;
    }
};
