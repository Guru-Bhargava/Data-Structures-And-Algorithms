//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
      string s;
      s=to_string(N);
      vector<int>v;
      for(int i=0;i<s.size();++i)
      {
        v.push_back(int(s[i])-48);
        // cout<<int(s[i])-48<<" "<<s[i]<<" ";
      }
      int c=0;
      for(int i:v)
      {
          if(i!=0)
          {
              if(N%i==0)
              {
                  c++;
              }
          }
      }
    //   cout<<c<<endl;
    return(c);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
