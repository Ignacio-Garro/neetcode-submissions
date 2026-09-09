class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> sol;
        int zeros = 0;
        int multi = 1;
        for(int num : nums){
            if(num != 0){
                multi *= num;   
            }
            else{
                zeros++;
            }
        }
        sol.reserve(nums.size());
        for(int num: nums){
            if(zeros > 1) sol.push_back(0);
            else if(zeros == 1){
                if(num == 0) sol.push_back(multi);
                else sol.push_back(0);
            }
            else sol.push_back(multi/num);
        }
        return sol;
    }
};
