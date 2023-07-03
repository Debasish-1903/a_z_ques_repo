#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


void reverseList(ListNode* head, int k){
    
    ListNode* p=nullptr;
    ListNode*c=head;
    ListNode* n=head->next;
    ListNode *temp=head;
    
    while(n!=nullptr){
        
        
        p=c;
        c=n;
        n=n->next;
        
        
        
    }
    
    head=c;
    
    head->next=temp;
    p->next=nullptr;
    
    
      if(head==nullptr||head->next==nullptr||k==0) return head;
    
    while(k--){
        
        c=c->next;
        
        if(p->next==nullptr) return head;
        
        
        
        
        
    }
    
    
    
    
}





ListNode* rotateList(ListNode* head, int k) {
    //Complete the function
    
  
    
    //ListNode* nexthead=reverseList(head;k);
    
    reverseList(head,k);
    
    
}

ListNode* GetList(vector<int> &num) {
    ListNode* head = nullptr;

    if(num.empty()) {
        return head;
    }

    ListNode* cur = head;
    
    for(int i  = 0; i < (int)num.size(); i++) {
        ListNode* temp = new ListNode(num[i]);
        if(!cur) {
            cur = temp;
            head = cur;
        } 
        else {
            cur->next = temp;
            cur = temp;
        }
    }
    
    return head;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    vector<int> num;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        num.push_back(x);
    }

    int K;
    cin >> K;

    ListNode* head = GetList(num);

    head = rotateList(head, K);

    while(head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
    
    return 0;
}