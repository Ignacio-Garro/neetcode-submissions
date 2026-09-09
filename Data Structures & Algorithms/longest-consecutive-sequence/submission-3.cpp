class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> setNum;

        for(int num:nums){
            setNum.insert(num);
        }

        int longestSeq = 0;
        for(int num:nums){
            if(setNum.contains(num - 1)) continue;
                
            int lenght = 1;
            while(setNum.contains(num+lenght)) lenght++;
            longestSeq = max(longestSeq,lenght);
        }
        return longestSeq;
    }
};
