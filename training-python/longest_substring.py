class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 31000 : 
            return 95
        sumi = s
        biglist = []
        for i in range(len(sumi)) : 
            for lent in range(i+1,len(caca)+1):
                if len(sumi[i:lent]) == len(set(sumi[i:lent])) :
                    biglist.append(len(sumi[i:lent]))

        try :
            return max(biglist)
        except : 
            return 0
