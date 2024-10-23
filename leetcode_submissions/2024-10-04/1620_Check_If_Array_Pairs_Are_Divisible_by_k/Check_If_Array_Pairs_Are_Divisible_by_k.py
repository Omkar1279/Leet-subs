class Solution:
    def canArrange(self, arr: List[int], k: int) -> bool:
        
        n = len(arr)

        if n%2 !=0:
            return 0

        remainder_count = defaultdict(int)

        for num in arr:
            remainder = (num%k + k) %k

            remainder_count[remainder] += 1


        for i in range(k //2):
            if i == 0:
                if remainder_count[0]%2 != 0:
                    return 0

            else:
                if remainder_count[i] != remainder_count[k-i]:
                    return 0

        return 1
