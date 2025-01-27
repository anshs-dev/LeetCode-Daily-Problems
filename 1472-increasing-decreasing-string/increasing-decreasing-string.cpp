class Solution {
public:
    string sortString(string s) {
        map<char, int> m;
        
        // Count frequency of each character
        for (char x : s) m[x]++;
        
        string result = "";
        
        // Continue until all characters are processed
        while (!m.empty()) {
            // Ascending order
            for (auto it = m.begin(); it != m.end(); ) {
                result += it->first;  // Add character to result
                it->second--;  // Decrease frequency
                if (it->second == 0) {
                    it = m.erase(it);  // Safe erase, move iterator to next
                } else {
                    ++it;  // Only increment if not erased
                }
            }
            
            // Descending order
            for (auto it = m.rbegin(); it != m.rend(); ) {
                result += it->first;  // Add character to result
                it->second--;  // Decrease frequency
                if (it->second == 0) {
                    it = decltype(it)(m.erase((++it).base()));  // Safe erase
                } else {
                    ++it;  // Only increment if not erased
                }
            }
        }
        
        return result;
    }
};
