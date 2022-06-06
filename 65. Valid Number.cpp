class Solution {
public:
    bool isNumber(string s) {
        bool digitseen=false,eseen=false,dotseen=false;
        int countplus=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(isdigit(ch))
            {
                digitseen=true;
            }
            else if(ch=='+'||ch=='-')
            {
                if(countplus==2)  // two +/- signs are invalid
                    return false;
                if(i>0&&(s[i-1]!='e'&&s[i-1]!='E')) // 3e+7 is valid
                    return false;
                if(i==s.length()-1)  // +/- cant be at last
                    return false;
                countplus++;
            }
            else if(ch=='.')
            {
                if(eseen||dotseen)    // e/E should be after dot
                    return false;
                if(i==s.length()-1 && !digitseen)  // single dot invalid
                    return false;
                dotseen=true;
            }
            else if(ch=='e'||ch=='E')
            {
                if(eseen||!digitseen||i==s.length()-1)   // there should be only 1 e/E with some digits before it, ans e/E cant be at last; 1e,Ee,e1 invalid
                    return false;
                eseen=true;
            }
            else
            {
                return false;
            }
            
        }
        return true;
    }
};
