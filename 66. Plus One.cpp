//66. Plus One

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            digits[i]=digits[i]+1;
            carry=digits[i]/10;
            digits[i]=digits[i]%10;
            if(carry==0)
                break;
        }
        if(carry==0)
            return digits;
        else
        {
            digits.insert(digits.begin(), carry);
            return digits;
        }
    }
};
