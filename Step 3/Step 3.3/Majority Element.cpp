class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
          map<int,int>mp;
        vector<int>v;
          for(int i=0;i<nums.size();++i)
          {
            mp[nums[i]]++;
          }
          float ans=(nums.size())/3;
          for(auto it:mp)
          {
            if(it.second>ans)
            {
              int a=it.first;
                v.push_back(a);
            }
          }
        return(v);
    }
};
