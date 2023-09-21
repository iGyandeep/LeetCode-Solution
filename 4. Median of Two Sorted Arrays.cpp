/*  Approach - 1: Brute Force  */


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for (int i=0; i<nums1.size(); i++) {
            arr.push_back(nums1[i]);            
        }
        for (int i=0; i<nums2.size(); i++) {
            arr.push_back(nums2[i]);
        }

        sort(arr.begin(), arr.end());

        int size = arr.size();
        double ans = 0.0;
        double x, y;
        if (size%2 == 0) {
            x = arr[arr.size()/2];
            y = arr[(arr.size()/2)-1];
            ans = ((x + y) / 2);
            return ans;
        }
        else {
            x = arr[arr.size()/2];
            return x;
        }
        
    }
};
