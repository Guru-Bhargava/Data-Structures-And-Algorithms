//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
      vector<int>v;
      string s=to_string(n);
      for(int i=0;i<s.size();++i)
      {
        v.push_back(int(s[i])-48);
      }
      long long ans=0;
      // debug(v)
      for(int i:v)
      {
        ans+=pow(i,3);
      }
      if(ans==n) return("Yes");
      else return("No");
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
