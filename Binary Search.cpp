#include<bits/stdc++.h>
using namespace std;
 int search(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        while(j-i>0 && nums.size()>2){
            int mid = (i+j)/2;
            if(nums[mid]==target){
              return mid;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        if(nums[i]==target){
              return i;
        }
        else if(nums[j]==target){
              return j;
        }
        else{
            return -1;
        }
    }
int main(){

    return 0;
}

