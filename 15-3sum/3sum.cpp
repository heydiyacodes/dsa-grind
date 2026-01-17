class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> ansarr;

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){ //outer loop to fix every possible valid el
            int j=i+1;  //initialised inside loop.
            int k=nums.size()-1;
            if(nums[i]>0) break;

            if(i > 0 && nums[i] == nums[i-1]) continue; //ignore dups right away

            while(j<k){
                if(nums[j]+nums[k]==-nums[i]){
                    ansarr.push_back({nums[i],nums[j],nums[k]});
                    j++;k--;

                    while(j < k && nums[j] == nums[j-1]) j++;
                    while(j < k && nums[k] == nums[k+1]) k--;

                } else if(nums[j]+nums[k]<-nums[i]){
                    j++;
                    while(j < k && nums[j] == nums[j-1]) j++;
                    
                } else if(nums[j]+nums[k]>-nums[i]){
                    k--;
                    while(k > j && nums[k] == nums[k+1]) k--;
                } 
            }
        }
        return ansarr;
    }
};