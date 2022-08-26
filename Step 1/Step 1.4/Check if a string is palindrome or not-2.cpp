class Solution {
public:
    int f(string s,int i,int n)
    {
      if(i>=n/2) return 1;
      if(s[i]!=s[n-i-1]) return 0;
      return(f(s,i+1,n));
    }
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();++i)
          {
            s[i]=tolower(s[i]);
          }
          string ans;
          for (int i = 0; i < s.size(); ++i) {
            if((int(s[i])>=97 and int(s[i])<=122) or (int(s[i])>=48 and int(s[i])<=57)) ans+=s[i];
          }
          int po=f(ans,0,ans.size());
        if(po==1) return true;
        else return false;
            }
};
