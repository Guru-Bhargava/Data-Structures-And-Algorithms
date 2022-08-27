class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int maxi=nums.size();
      int ts=((maxi)*(maxi+1))/2;
      int s=accumulate(nums.begin(),nums.end(),0);
      int ans=ts-s;
        return(ans);
    }
};
