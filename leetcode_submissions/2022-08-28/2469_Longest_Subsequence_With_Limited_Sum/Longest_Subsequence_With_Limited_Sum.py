class Solution:
    def answerQueries(self, nums: List[int], queries: List[int]) -> List[int]:
        self.es = []
        def printSubsequences(arr, index, subarr):
            if index == len(arr):
                if len(subarr) != 0:
                    self.es.append(subarr)

            else:
                printSubsequences(arr, index + 1, subarr)
                printSubsequences(arr, index + 1, 
                                    subarr+[arr[index]])

            return
        printSubsequences(nums, 0, [])
        answer = []
        for n in queries:
            t = 0
            for numd in self.es:
                if sum(numd) <= n:
                    t = max(t, len(numd))
            answer.append(t)
        return answer