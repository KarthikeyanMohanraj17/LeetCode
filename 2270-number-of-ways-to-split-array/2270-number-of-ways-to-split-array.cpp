class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
       long long int R_sum=0;
        long long int l_sum=nums[0];
        int count=0;
        int r=1;
        for(int i=1;i<nums.size();i++)
            R_sum+=nums[i];
        if(l_sum>=R_sum)count++;
        while(r<(nums.size()-1))
        {
            l_sum+=nums[r];
            R_sum-=nums[r];
            if(l_sum>=R_sum)
                count++;
            r++;
        }
        return count;
    }
};