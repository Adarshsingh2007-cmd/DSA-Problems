class Solution {
public:
    bool isPower(int n){
        if(n==1) return true;
        if(n%3!=0) return false;
        n = n/3;
        return isPower(n);
    }

    bool isPowerOfThree(int n) {
        if(n<=0) return false;
          return isPower(n);
    }
};