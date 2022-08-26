class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long l=0,sum=0,ans=0;
        for(int r=0;r<nums.size();++r)
        {
            sum+=nums[r];
            while(sum+k<static_cast<long>(nums[r])*(r-l+1))
            {
                sum-=nums[l];
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return(ans);
    }
};
