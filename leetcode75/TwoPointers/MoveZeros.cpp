class Solution {
public:
    void moveZeroes(vector<int>& nums) {

       int idx = 0;
       int count = 0;
       for(int i = 0; i<nums.size();i++) 
       {
         if(nums[i] == 0)
            count++;
        else
        {
            nums[idx++] = nums[i];
        }
       }

       for(int i = 0; i< count; i++)
       {
        nums[idx++] = 0;
       }
    }
};

