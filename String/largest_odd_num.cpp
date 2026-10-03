class Solution {
public:
    string largeOddNum(string s) {
        int n = s.length();
        int right = -1;

        for (int i = n - 1; i >= 0; i--) {
            if ((s[i] - '0') % 2 == 1) {
                right = i;
                break;
            }
        }

        if (right == -1) {
            return "";
        }
        
        int left = 0;
        while (left <= right && s[left] == '0') {
            left++;
        }

        if (left > right) {
            return "";
        }

        return s.substr(left, right - left + 1);
    }
};
