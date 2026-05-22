class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char, int> s1;    
    unordered_map<char, int> s2;    
    for (char n : s){
        s1[n]++;
    }
    for (char n : t){
        s2[n]++;
    }
    return s1==s2;
    }
};
