class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char, int> hashmap;

        for(int i=0;i<s.length();i++){
            hashmap[s[i]]++;
            hashmap[t[i]]--;
        }

        for(auto&pair : hashmap){
            if(pair.second!=0) return false;
        }
        return true;
    }
};