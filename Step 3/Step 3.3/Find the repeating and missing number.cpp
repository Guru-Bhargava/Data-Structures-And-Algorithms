//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        map<int,int>mp;
        for(int i=1;i<n+1;++i)
        {
            mp[i]=0;
        }
        for(int i=0;i<n;++i)
        {
            mp[arr[i]]++;
        }
        int du,mi;
        for(auto it:mp)
        {
            if(it.second==0)
            {
                mi=it.first;
            }
            else if(it.second==2)
            {
                du=it.first;
            }
        }
        int *m = new int[2];
        m[0]=du;
        m[1]=mi;
        return(m);
        // return({du,mi});
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
