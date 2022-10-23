class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mapp;
        for(int i=0;i<nums.size();i++)
        {
            if(mapp.find(nums[i])==mapp.end())
            {
                mapp[nums[i]]=i;
            }
            else 
            {
                if (abs(mapp[nums[i]]-i)<=k)
                {
                    cout<<mapp[nums[i]]<<" "<<i;
                    return true;
            }
                else
                    mapp[nums[i]]=i;
            }
        
        
    }
        return false;
    }
};