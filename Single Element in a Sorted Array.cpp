class Solution { public:     int singleNonDuplicate(vector<int>& nums) {         if(nums.size()==1)return nums[0];         if(nums.size()==3)return nums[1]==nums[2]?nums[0]:nums[2];         int lo=0,hi=nums.size()-1;         while(lo<hi)         {             cout<<lo<<" "<<hi<<endl;             int mid=lo+(hi-lo)/2;             if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1])                 return nums[mid];             if(nums[mid]==nums[mid+1])                 ++mid;             if((hi-mid)%2==0)                 hi=mid-2;             else                 lo=mid+1;         }         return nums[hi];     } };