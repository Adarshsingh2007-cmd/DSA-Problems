class Solution {
public:
    int sumOfPrimesInRange(int n) {
      int newNo = 0;
      int k = n;
      while(k!=0)
      {
        int r = k%10;
        newNo = newNo*10 + r;
        k = k/10;
      }  
      int Min = min(n, newNo);
      int Max = max(n, newNo);
      int sum  = 0;
      while(Min<=Max)
      {
        int cnt = 0;
        for(int i=2;i*i<=Min;i++)
        {
            if((Min%i) == 0)
            {
               cnt++;
            }
        }
        if(Min==1)
        {
            cnt++;
        }
        if(cnt==0)
        {
            sum+=Min;
        }
        Min++;
      }

      return sum;
      
    }
};