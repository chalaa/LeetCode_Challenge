#include <bits/stdc++.h>

using namespace std;

/* reverseString */

 void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
 }
/*reverseStr 2*/

  string reverseStr(string s, int k) {
        for(int i=0;i<s.size();i+=k){
            int x= s.size();
            if(i==0 && x-i<k){
                reverse(s.begin(),s.end());
                break;
            }else if(x-i<=k){
               reverse(s.begin()+i,s.end());
                break;
            }else if(i!=0 && x-i<=k){
                continue;
            }
            else{
                reverse(s.begin()+i,s.begin()+i+k);
            }
            i+=k;
        }
        return s;
    }

 /* reverseWords */
string reverseWords(string s) {
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
              reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
        }
        reverse(s.begin()+j,s.end());
        return s;
}

/*middleNode*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 ListNode* middleNode(ListNode* head) {
        ListNode *first = head;
        ListNode *last = head;
        while(last && last->next){
            first = first->next;
            last= last->next->next;
        }
        return first;
}
int main(){

return 0;
}
