class Solution:
    def reverse(self, x: int) -> int:
        mylist = list(str(x))
        empy = []
        new = "".join(mylist)
        if len(mylist) == 1 and mylist[0]=="0" :
            return 0 
        while int(new) %10 == 0 : 
            new = int(new) // 10 
            mylist = list(str(new))
        if mylist[0] == "-" :
            del mylist[0]
            empy.append("-")

        for i in range(1,len(mylist)+1) : 
                empy.append(mylist[-i])

        caca = "".join(empy)
        if int(caca) > 2**31 -1 or int(caca) < -2**31	:

            return 0 
        return caca 
