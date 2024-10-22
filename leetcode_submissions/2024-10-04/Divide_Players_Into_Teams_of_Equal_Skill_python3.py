class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        
        n = len(skill)

        if n%2 != 0:
            return -1

        skill.sort()

        target_sum = skill[0] + skill[n-1]

        product_sum = 0

        for i in range(n//2):
            j = n - 1 - i
            
            if skill[i] + skill[j] != target_sum:
                return -1 
         
            else:
                product_sum += (skill[i] * skill[j])

        return product_sum