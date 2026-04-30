class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int, int> set;
        int result = 0; //n ^ 0 = n
        for(int n : nums){
            result = n ^ result;
        }
        return result;
    }
};
