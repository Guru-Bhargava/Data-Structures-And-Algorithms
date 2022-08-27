
/*
    Approach-1
*/


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

/*
    Approach-2
*/


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int num1,num2,c1=0,c2=0;
  for(int i=0;i<nums.size();++i)
  {
    if(nums[i]==num1) c1++;
    else if(nums[i]==num2) c2++;
    else if(c1==0)
    {
      num1=nums[i];
      c1=1;
    }
    else if(c2==0)
    {
      num2=nums[i];
      c2=1;
    }
    else
    {
      c1--;
      c2--;
    }
  }
  int p1=0,p2=0;
  for(int i=0;i<nums.size();++i)
  {
    if(nums[i]==num1) p1++;
    else if(nums[i]==num2) p2++;
  }
  vector<int>ans;
  float occ=(nums.size())/3;
  if(p1>occ)
  {
    ans.push_back(num1);
  }
  if (p2 > occ) {
    ans.push_back(num2);
  }
        return(ans);
    }
};
