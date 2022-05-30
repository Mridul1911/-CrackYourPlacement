class Solution {
public:
    void rev(string &s,int l,int r){
        while(l<r)
            swap(s[l++],s[r--]);
    }
    string reverseWords(string s) {
        int i,j,n=s.length();
        i=0;
        
        rev(s,0,n-1);
        while(i<n){
            
            // Remove leading spaces
            j=i;
            while(j<n && s[j]==' ')
                j++;
            
            int cnt=0;
            
            while(j<n && s[j]!=' '){
                j++;
                cnt++;
            }
            
            if(j>n)
                break;
            j--;
            
            if(i==0) 
            rev(s,i,j);
            else     rev(s,i+1,j);
            
            if(cnt==0)
                i=j+1;
            else
                i=i+cnt;
        }
        
        j=n-1;
        while(j>=0 && s[j]==' '){
            j--;
            s.pop_back();
        }
        return s;
        
    }
};
