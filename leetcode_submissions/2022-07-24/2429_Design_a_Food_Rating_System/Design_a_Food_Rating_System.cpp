class FoodRatings {
public:
    map<string,pair<string,int>> mp;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        
        for(int i=0;i<foods.size();i++) {
            mp[foods[i]] = {cuisines[i],ratings[i]};
        }
    }
    
    void changeRating(string food, int newRating) {
        
        pair<string,int> p;
        p=mp[food];
        p.second=newRating;
        mp[food]=p;
    }
    
    string highestRated(string cuisine) {
        
        int maxi=INT_MIN;string ans;
        for(auto it=mp.begin();it!=mp.end();it++) {
            
            if(it->second.first==cuisine) {
                if(it->second.second > maxi) {
                    ans=it->first;maxi=it->second.second;
                }
            }
        }
        return ans;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */