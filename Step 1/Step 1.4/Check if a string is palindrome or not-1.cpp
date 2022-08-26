//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string f(string s,int i,int n)
    {
      if(i>=n/2) return "true";
      if(s[i]!=s[n-i-1]) return "false";
      return(f(s,i+1,n));
    }
	int isPalindrome(string S)
	{
	    // Your code goes here
	    string ans=f(S,0,S.size());
	    if(ans=="true") return 1;
	    else return 0;
	    
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends
