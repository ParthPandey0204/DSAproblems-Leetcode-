class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt =0;
        int maxcnt =0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(nums[i]==1){
                cnt++;
               maxcnt = max(cnt , maxcnt);
            }
            else{
                cnt =0;
            }
        }
        return maxcnt;
    }
};