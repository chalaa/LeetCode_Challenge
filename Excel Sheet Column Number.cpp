#include <bits/stdc++.h>

using namespace std;

string convertToTitle(int n) {
       string str = "";
        while(n>0){
            int a=(n-1)%26;
            str+=char(a+65);
            n=(n-1)/26;
        }
        reverse(str.begin(),str.end()) ;
        return str;
    }

int main(){

return 0;
}
