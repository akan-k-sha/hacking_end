class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        cout<<"called"<<endl;
        if(nums1.size()>nums2.size()){
            cout<<"working 00"<<endl;
            return findMedianSortedArrays(nums2,nums1);
        }
        int low=0;
        int high=nums1.size();
        cout<<"all fine line 11"<<endl;
        int n=nums1.size();
        cout<<"all fine line 13"<<endl;
        int m=nums2.size();
        cout<<"all fine line 15"<<endl;
        
        while(low<=high){
            int cut1=(low+high)>>1;
            cout<<"all fine line 19"<<endl;
            int cut2=((n+m)/2)-cut1;
            cout<<"all fine line 21"<<endl;
            int l1=(cut1==0)?INT_MIN:nums1[cut1-1];
            cout<<"all fine line 23"<<endl;
            int l2=(cut2==0)?INT_MIN:nums2[cut2-1];
            cout<<"all fine line 25"<<endl;
            int r1=(cut1==n)?INT_MAX:nums1[cut1];
            cout<<"all fine line 27"<<endl;
            int r2=(cut2==m)?INT_MAX:nums2[cut2];
            cout<<"all fine line 29"<<endl;
            cout<<"working 1"<<endl;
            if(l1<=r2 && l2<=r1){
                if((n+m)%2==0){
                    cout<<"working 2"<<endl;
                    return ((max(l1,l2)+min(r1,r2))/2.0);
                }
                else{
                    cout<<"working 3"<<endl;
                    return (min(r1,r2)*1.0);
                }
            }
            else if(l1>r2){
                cout<<"working 4"<<endl;
                high=cut1-1;
            }
            else{
                cout<<"working 5"<<endl;
                low=cut1+1;
            }
        }
        return 0.0;
    
    }
};


            
