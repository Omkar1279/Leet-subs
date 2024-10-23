class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        
        int n=energy.size(),cnt=0;
        
        for(int i=0;i<n;i++) {
            
            if(initialEnergy>=energy[i]) {
                initialEnergy-=energy[i];
            }
            else {
                cnt+=abs(initialEnergy-energy[i]);
            }
            
            if(initialExperience<experience[i]) {
                cnt+=abs(initialExperience-experience[i]);
                initialExperience+=experience[i];
            }
        }
        return cnt;
    }
};