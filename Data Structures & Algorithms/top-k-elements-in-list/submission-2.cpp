class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<pair<int,int>> v;
        vector<int>res;
        for(int p:nums){
            freq[p]++;
        }
        for(auto& it :freq ){
            v.push_back({it.second,it.first});            
        }

        sort(v.rbegin(), v.rend());

   
        for (int i = 0; i < k; i++) {
            res.push_back(v[i].second);
        }

        return res;
    }
};
