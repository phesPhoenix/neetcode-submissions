class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> maps;
        unordered_map<char, int> mapt;

        for (char k : s){
            maps[k]++;
        }
        for (char k : t){
            mapt[k]++;
        }
        return (maps == mapt);
    }
};
