//415. Add Strings

class Solution {
public:
    string addStrings(string num1, string num2) {
        string s="";
        int n1=num1.length()-1;
        int n2=num2.length()-1;
        int carry=0;
        while(n1>=0&&n2>=0)
        {
            int i=num1[n1]-'0';
            int j=num2[n2]-'0';
            int sum=i+j+carry;
            if(sum>9)
            {
                carry=sum/10;
                sum=sum%10;
            }
            else
            {
                carry=0;
            }
            s+=to_string(sum);
            n1--;
            n2--;
        }
        while(n1>=0&&n2<0)
        {
            int i=num1[n1]-'0';
            int sum=i+carry;
            if(sum>9)
            {
                carry=sum/10;
                sum=sum%10;
            }
            else
                carry=0;
            s+=to_string(sum);
            n1--;
        }
        while(n2>=0&&n1<0)
        {
            int j=num2[n2]-'0';
            int sum=j+carry;
            if(sum>9)
            {
                carry=sum/10;
                sum=sum%10;
            }
            else
                carry=0;
            s+=to_string(sum);
            n2--;
        }
       if(carry>0)
          s+=to_string(carry);
        
        int l=0, h=s.length()-1;
        while(l<h)
        {
            swap(s[l], s[h]);
            l++;
            h--;
        }
        return s;
    }
};
