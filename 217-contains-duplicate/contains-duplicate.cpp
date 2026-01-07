class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seenbefore;

        for(int num:nums){
            if(seenbefore.find(num) != seenbefore.end()) return true;
            seenbefore.insert(num);
        }
        return false;
    }
};