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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode();
        ListNode* p=new ListNode();
        ListNode* p1=new ListNode();
        l3=p;
        int x=0,y=0;
        while(l1 != NULL){
            if(l2!=NULL){
                x=l1->val+l2->val+y;
                y= (x/10);
                x=(x>9)?x%(10*y):x;
                p->val=x;
                p->next=new ListNode();
                p1=p;
                p=p->next;
                l2=l2->next;
            }
            else{
                
                x=l1->val+y;
                y= (x/10);
                x=(x>9)?x%(10*y):x;
                p->val=x;
                p1=p;
                p->next=new ListNode();
                p=p->next;
                
            }
            l1=l1->next;   
        }
        if(l2!=NULL){
            
            while(l2 != NULL){
                
                x=l2->val+y;
                y= (x/10);
                x=(x>9)?x%(10*y):x;
                p->val=x;
                p1=p;
                p->next=new ListNode();
                p=p->next;
                l2=l2->next;
            }
            
        }
        if(y==0)
            p1->next=NULL;
        else
            p->val=y;
        
        p=p1=l1=l2=NULL;
        delete(p);
        delete(p1);
        delete(l1);
        delete(l2);
        
        return l3;
        
    }
};