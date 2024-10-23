class Solution {
public:
    struct Compare {
        bool operator() (pair<int, string> a, pair<int, string> b) {
            if(a.first == b.first)
                return a.second > b.second;
            else
                return a.first < b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        // sort(words.begin(),words.end());
        map<string,int> mp;
        
        for(auto &s:words) mp[s]++;
        
        priority_queue<pair<int, string>, vector<pair<int, string>>,Compare> pq;
        
        for(auto it=mp.rbegin();it!=mp.rend();it++) {
            // cout<<it->first<<endl;
            pq.push({it->second,it->first});
        }
        
        vector<string> ans(k,"");

        for(int i=0;i<k;i++) {
            // cout<<pq.top().second<<endl;
            ans[i]=pq.top().second;
            pq.pop();
        }
        return ans;
    }
};