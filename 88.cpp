// Let two arrays be nums1 & nums2 
// Size of them be m & n respectively
// Let i be the index of last element(ie m-1)th of nums1
// Let j be the index of last element(ie n-1)th of nums2
// Both array are to be merged & arranged in increasing order
// Let k be the index pointing to the last element of resultant array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
        int i=m-1;
        int j=n-1;
        int k=(m+n-1);
        
        while(i>=0 && j>=0)
        {
            if(nums1[i]>nums2[j])          
                nums1[k--]=nums1[i--];
            else 
                nums1[k--]=nums2[j--];
    }
        while(i>=0) 
            nums1[k--]=nums1[i--];
        
        while(j>=0) 
            nums1[k--]=nums2[j--];  
        
    }
};
___________________________________________________________________________________________________
  
