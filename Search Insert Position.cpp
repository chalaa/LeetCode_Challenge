#include<bits/stdc++.h>
using namespace std;
 int searchInsert(vector<int>& nums, int target) {
         int i=0;
        int j=nums.size()-1;
        while(j-i>0){
            int mid = (i+j)/2;
            if(nums[mid]==target){
              return mid;
            }
            if(nums[mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        if(nums[i]==target){
              return i;
        }
        if(nums[i]>target){
              return i;
        }
        return i+1;
    }

int main(){

    return 0;
}

