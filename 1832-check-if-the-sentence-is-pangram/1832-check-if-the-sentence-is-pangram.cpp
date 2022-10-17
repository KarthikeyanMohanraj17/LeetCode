class Solution {
public:
    bool checkIfPangram(string s) {
        if(s.size()<26)return false;
        //unordered_map<char, int>mapp;
        vector<int> res(26,0);
        int count=0;
        for(auto it:s)
        {
            if(res[it-'a']==0)
            {
                res[it-'a']++;
                count++;
                
            }
            else
            {
                res[it-'a']++;
            }
        }
        if(count==26)return true;
        
        
        
        return false;
        
        
    }
};