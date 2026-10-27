class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        string ans ="";
        while(j>=0 || i>=0 || carry)
        {   
            int bitA = 0;
            int bitB = 0;
            if(i>=0)
            {
                bitA = a[i]-'0';
              i--;
            }
            if(j>=0)
            {
              bitB = b[j]-'0';
              j--;
          
            }
         int sum = bitA + bitB + carry;
         int bit = sum%2;
          carry = sum/2;
         ans.push_back(char(bit + '0'));
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};