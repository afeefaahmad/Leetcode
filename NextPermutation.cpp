class Solution {
public:
    void nextPermutation (vector<int>& nums) {
        
        if( nums.size() == 1 ) return;
        
        for( int i = nums.size()-2; i >= 0; i-- ){
            for( int j = nums.size()-1; j > i; j-- ){
                if( nums[i] < nums[j] ){   //for i-th value find it's next greater value
                    swap(nums[i],nums[j]); // swap the two value { 1,1,5 } -> { 1,5,1 } 
                    sort(nums.begin()+i+1,nums.end()); // swap makes the array lexicographically bigger,So sort the arrar from i+1-th position
                    return;
                }
            }
        }
        
        sort(nums.begin(), nums.end()); // for cases like { 4,3,2,1 }
    }
};
