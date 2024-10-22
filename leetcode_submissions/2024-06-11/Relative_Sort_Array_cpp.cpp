class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        if(arr2.size() == 0) {
            sort(arr1.begin(), arr1.end());
            return arr1;
        }

        map<int, int> mp;
        vector<int> ans;
        vector<int> not_present;

        for(int i: arr1) {
            mp[i]++;
        }

        for(int i=0;i<arr1.size();i++) {
            int j=0;
            for(;j<arr2.size();j++) {
                if(arr2[j]==arr1[i]) break;
            }
            if(j==arr2.size()) not_present.push_back(arr1[i]);
        }

        for(int i=0; i<arr2.size(); i++) {

            for(int j=0;j<mp[arr2[i]];j++) {
                ans.push_back(arr2[i]);
            }

        }

        sort(not_present.begin(), not_present.end());
        
        // if(not_present.empty()) {
        //     cout<<"Empty\n";
        // }

        // for(auto i: not_present) {
        //     cout<<i<<endl;
        // }

        ans.insert(ans.end(), not_present.begin(), not_present.end());

        return ans;
    }
};