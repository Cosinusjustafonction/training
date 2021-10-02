class Solution:
    def isPalindrome(self, x: int) -> bool:
        main = str(x)
        bg = []
        for i in range(1,len(main)+1) :
            bg.append(main[-i])
        if "".join(bg) == main : 
            return True 
        else : 
            return False
