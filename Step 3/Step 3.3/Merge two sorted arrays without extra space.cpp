/*
  Runtime: 0 ms, faster than 100.00% of C++ online submissions for Merge Sorted Array.
  Memory Usage: 9 MB, less than 72.74% of C++ online submissions for Merge Sorted Array.

*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
      for(int i=(nums1.size()-n);i<nums1.size();++i)
      {
        nums1[i]=nums2[j++];
      }
      sort(nums1.begin(),nums1.end());
    }
};
