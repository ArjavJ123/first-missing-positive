class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> ht;
        int max =0; 
        for(int i=0; i<nums.size(); i++)  {
            if(max < nums[i]) {
                max = nums[i];
            }
            ht[nums[i]]++;
        }
        if(max <= 0) {
            return 1;
        }
        for(int i =1 ;i <max; i++) {
            if(ht[i] == 0) {
                return i;
            }
        }
        return max+1;
    }
};
