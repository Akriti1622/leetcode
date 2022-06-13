//125. Valid Palindrome

class Solution {
public:
    bool isPal(string t)
    {
        int l=0, h=t.length()-1;
        while(l<h)
        {
            if(t[l]!=t[h])
                return false;
            l++;
            h--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string t="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]+=32;
                t+=s[i];
            }
            else if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9'))
            {
                t+=s[i];
            }
        }
        return isPal(t);
        
    }
};
