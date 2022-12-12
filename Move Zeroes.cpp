#include <bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j =0;
        for(int i=0;i<n;i++){
            if(nums[j]==0){
                nums.erase(nums.begin()+j);
                nums.push_back(0);
            }
            else{
                j++;
            }
        }
    }

int main(){

return 0;
}

