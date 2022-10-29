class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-2;
        int mid;
        while(low<=high){
            mid=(low+high)>>1;
            //if we xor 
//a even number by 1: we get next odd index
            ///a odd number... we get previous even
            //so to check if the middle eleement is on the left half of the req ans
            //we need to check if it if mid is at the 1st occurence=even
// its next odd is same or not
            //if it is 2nd occurence(ood) its prev even is same or not...if yes lies on left
            if(nums[mid]==nums[mid^1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
        return nums[low];
    }
};
