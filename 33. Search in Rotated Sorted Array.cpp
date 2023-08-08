class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        
        while (start <= end)
        {
            if (target == nums[mid])
                return mid;
            
            else if (nums[start] <= nums[mid])
            {
                if (target <= nums[mid] && target >= nums[start])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else
            {
                if (target >= nums[mid] && target <= nums[end])
                    start = mid + 1;
                else 
                    end = mid - 1;
            }
            
            mid = start + (end - start) / 2;
        }
        
        return -1;
        
    }
};
