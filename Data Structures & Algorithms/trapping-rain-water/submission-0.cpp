class Solution {
public:
    int trap(vector<int>& arr) {
        int l=0,h=arr.size()-1;
        int maxl=0,maxh=0,water=0;
        while(h>l){
            if (arr[h]>arr[l]){
                if (arr[l]>=maxl) maxl=arr[l];
                else water+=maxl-arr[l];
                l++;
            }
            else{
                if (arr[h]>=maxh) maxh=arr[h];
                else water+=maxh-arr[h];
                h--;
            }
        }
        return water;
    }
};
