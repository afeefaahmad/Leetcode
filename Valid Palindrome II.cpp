class Solution {
    
bool isPalindrome(string s, int left, int right) {
        while(left < right) {
            
            if (s[left] != s[right])
                return false;
            else {
              left++;
              right--;
            }
        } 
        return true;
    }
    
    
public:
    bool validPalindrome(string s) {
        int start = 0, end = s.length()-1;
    
        while(start < end)
        {
            
            if(s[start] != s[end]) {
                         // ignoring one character, if the rest is a palindrome, it's our answer
            return   isPalindrome(s, start+1, end) || isPalindrome(s, start, end-1);
            }
            else {
              start++;
              end--;
            }
        }
        return true;
    }
};
