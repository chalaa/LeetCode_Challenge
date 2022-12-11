#include<bits/stdc++.h>
using namespace std;
 vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        for(auto x : nums){
            res.push_back(x*x);
        }
       sort(res.begin(),res.end());
       return res;
    }
int main(){

    return 0;
}
