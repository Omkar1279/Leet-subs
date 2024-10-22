class FoodRatings {
public:
    map<string,vector<pair<string,int>>> mp;
    
    vector<string> v;vector<string> c;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        
        for(int i=0;i<foods.size();i++) {
            mp[cuisines[i]].push_back({foods[i],ratings[i]});
            sort(mp[cuisines[i]].begin(),mp[cuisines[i]].end());
        }
        v=foods;c=cuisines;
    }
    
    void changeRating(string food, int newRating) {
        
        int i=0;
        for(;i<v.size();i++) {
            if(v[i]==food) break;
        }
        vector<pair<string,int>> temp;
        temp=mp[c[i]];
        
        for(int j=0;j<temp.size();j++) {
            if(temp[j].first==food) temp[j].second=newRating;
            break;
        }
        mp[c[i]]=temp;
        
    }
    
    string highestRated(string cuisine) {
        
        int maxi=INT_MIN;vector<pair<string,int>> ans;string sol;
        ans=mp[cuisine];
        
        for(int i=0;i<ans.size();i++) {
            
            if(ans[i].second > maxi) {
                sol=ans[i].first;maxi=ans[i].second;
            }
        }
        return sol;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */