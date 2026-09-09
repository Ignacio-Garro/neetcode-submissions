class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> setNum;

        if(nums.size() == 0) return 0;

        for(int num:nums){
            setNum.insert(num);
        }

        int longestSeq = 1, curSeq = 1;
        for(int num:nums){
            if(!setNum.contains(num - 1)){
                while(setNum.contains(num+curSeq)){
                    curSeq++;
                    longestSeq = std::max(longestSeq,curSeq);
                }
                curSeq = 1;
            }
        }
        return longestSeq;
    }
};
