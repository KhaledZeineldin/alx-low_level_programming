class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        size1 = nums1.size()
        size2 = nums2.size()
        total = size1 + size2
        index1 = 0
        index2 = 0
        for index in range(total):
            if index == total / 2:
                if total %2 == 0:
                    
                    
            if nums1[index1] <= nums2[index2]:
                index1 += 1
                continue
            else:
                index2 += 1
                continue


            