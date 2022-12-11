#include<bits/stdc++.h>
using namespace std;
 int firstBadVersion(int n) {
        int i= 1;
        while(i<n){
            int k = i+(n-i)/2;
            if(isBadVersion(k)){
                n=k;
            }
            else{
                i=k+1;
            }
        }
        return i;
    }
int main(){

    return 0;
}

