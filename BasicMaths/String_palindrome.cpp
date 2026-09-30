class Solution {
public:

    bool checkPalindrome(string& s, int left, int right)
    {
        // Base condition
        if (left >= right)
            return true;

        // Characters different hain
        if (s[left] != s[right])
            return false;

        // Andar wale characters check karo
        return checkPalindrome(s, left + 1, right - 1);
    }

    bool isPalindrome(string s)
    {
        return checkPalindrome(s, 0, s.size() - 1);
    }
};
