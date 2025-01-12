class Solution(object):
    def groupAnagrams(self, strs):
        anagrams_map = {}
        for s in strs:
            key = tuple(sorted(s))  
            if key not in anagrams_map:
                anagrams_map[key] = []
            anagrams_map[key].append(s)

        res = list(anagrams_map.values())
        
        return res
        
if __name__ == "__main__":
    strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
    s = Solution()
    print(s.groupAnagrams(strs))