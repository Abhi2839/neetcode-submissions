class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tgt) {
        int i=0,j=arr.size()-1;
        while(j>i){
            int sum =arr[j]+arr[i];
            if (sum==tgt) return {i+1,j+1};
            else if(sum>tgt) j--;
            else i++;
        }
        return {-1,-1};
        
    }
};
