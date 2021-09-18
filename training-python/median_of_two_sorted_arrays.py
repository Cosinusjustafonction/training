class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        big = nums1 + nums2
        big = sorted(big)
        if len(big) % 2 == 0 :
            result = (big[int(len(big)/2)-1] + big[int((len(big)/2) +1)-1]) /2
        elif len(big) == 1 :
            result = big[0]
        else : 
            result = big[int((len(big)-1)/2)]

        return result
