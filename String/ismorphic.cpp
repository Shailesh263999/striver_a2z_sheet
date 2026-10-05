class Solution {
public:
    bool isomorphicString(string s, string t) {
        
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;

        for (int i = 0; i < s.length(); i++) {
            
            char a = s[i];
            char b = t[i];

            // Check s -> t mapping
            if (mapST.find(a) != mapST.end()) {
                if (mapST[a] != b) {
                    return false;
                }
            }

            // Check t -> s mapping
            if (mapTS.find(b) != mapTS.end()) {
                if (mapTS[b] != a) {
                    return false;
                }
            }

            // Create mapping
            mapST[a] = b;
            mapTS[b] = a;
        }

        return true;
    }
};
