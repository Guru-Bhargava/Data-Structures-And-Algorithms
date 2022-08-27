class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int z=0;
  for(int i=0;i<nums.size();++i)
  {
    if(nums[i]==0) z++;
  }
  nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
  for(int i=0;i<z;++i)
  {
    nums.push_back(0);
  }
    }
};
