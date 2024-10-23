class Solution {
public:
    int distMoney(int money, int children) {
        if(money<children) return -1;

        money-=children;

        if(money%7==0) return children;

        int ans = money/7;

        int max_eight_dollar_children = money / 7;

        int remaining_money = money - max_eight_dollar_children * 7;

        
        if (remaining_money == 3 && (children - 
        max_eight_dollar_children == 1)) {
            max_eight_dollar_children--;
        }

        return max_eight_dollar_children;  
    }
};