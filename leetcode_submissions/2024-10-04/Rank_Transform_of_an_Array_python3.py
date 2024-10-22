class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        n = len(arr)
        
        sorted_unique_arr = list(sorted(set(arr)))

        rank_map = {num: rank + 1 for rank, num in enumerate(sorted_unique_arr)}

        return [rank_map[num] for num in arr]
        



