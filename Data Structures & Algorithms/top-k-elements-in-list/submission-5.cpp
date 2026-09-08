class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> count;

        for (int i = 0; i < nums.size(); i++) { // count how many times each num happens
            count[nums[i]]++;
        }
        //make min heap -> freq:value
        priority_queue<pair<int,int>,vector<pair<int, int>>,greater<pair<int, int>>> heap;

        for(auto& entry:count){ // we have a heap with the numbers with highest freq
            heap.push({entry.second,entry.first}); // we care about the freq FIRST for order
            if(heap.size() > k){
                heap.pop();
            }
        }

        vector<int> sol;
        for (int i = 0; i < k; i++) {
            auto k = heap.top();heap.pop();
            sol.push_back(k.second);
        }
        return sol;
    }
};
