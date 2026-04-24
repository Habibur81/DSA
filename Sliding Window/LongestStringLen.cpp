#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(const string& s){
    int left = 0, maxLen = 0;
    unordered_set<char> st;

    for(int right = 0; right < s.size(); right++){

        while (st.count(s[right]))
        {
            st.erase(s[left]);
            left++;
        }
        
        st.insert(s[right]);

        maxLen = max(maxLen, right - left + 1);
    }


    return maxLen;

}

int main() {
    // Test cases
    cout << "abssbssbdba  → " << lengthOfLongestSubstring("abssbssbdba") << endl; // 4 → "bdba" ? 
    cout << "abcabcbb     → " << lengthOfLongestSubstring("abcabcbb")    << endl; // 3 → "abc"
    cout << "bbbbb        → " << lengthOfLongestSubstring("bbbbb")       << endl; // 1 → "b"
    cout << "pwwkew       → " << lengthOfLongestSubstring("pwwkew")      << endl; // 3 → "wke"
    cout << "(empty)      → " << lengthOfLongestSubstring("")            << endl; // 0

    return 0;
}