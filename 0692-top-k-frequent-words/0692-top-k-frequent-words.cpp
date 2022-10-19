class Solution {
public:
   static bool comp(pair<string,int> a, pair<string, int> b)
    {
       if(b.second==a.second)
           return a.first<b.first;
        return b.second<a.second;
    }
    
    
    vector<string> topKFrequent(vector<string>& words, int k) {
      
        unordered_map<string, int> res;
        for(auto it:words)
            res[it]++;
      vector<pair<string,int>>s;
     
        for(auto m: res)
        {
        s.push_back({m.first, m.second});
         }
        sort(s.begin(),s.end(),comp);
        vector<string>temp;
     //   int count =0;
     //   int var=s[0].second;
       for(auto it:s)
       {
           if(k==0)break;
          
               k--;
               temp.push_back(it.first);
          
       }
            
        //for(auto it:s)
      //  cout<<it.first<<" "<<it.second<<"\n";
        
    return temp;
    
    }
};