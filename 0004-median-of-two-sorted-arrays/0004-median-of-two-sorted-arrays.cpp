class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            //     vector<int>ans;
    //     for(int i=0;i<nums1.size();i++){
    //          ans.push_back(nums1[i]);
    //     }
    //     for(int i=0;i<nums2.size();i++){
    //          ans.push_back(nums2[i]);
    //     }
    //     sort(ans.begin(),ans.end());
        
    //     int n = ans.size();
    //     double median;

    //     if(n%2 != 0){
    //         median = ans[n/2];
    //     }else{
    //         int mid1 = ans[(n-1)/2];
    //         int mid2 = ans[n/2];
    //         median = (mid1+mid2)/2.0;
    //     }
    //     return median;
    // }
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());

    sort(nums1.begin(),nums1.end());

        int n = nums1.size();
        double median;

        if(n%2 != 0){
            median = nums1[n/2];
        }else{
            int mid1 = nums1[(n-1)/2];
            int mid2 = nums1[n/2];
            median = (mid1+mid2)/2.0;
        }
        return median;
    }
};