#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

// parameters completing
#define all(x) x.begin(), x.end()

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

struct ListNode{
    int val;
    ListNode * next;

    ListNode(){
        val =0;
        next = NULL;
    }
    ListNode(int x):val(x),next(NULL){}

    ListNode(int x, ListNode*next): val(x), next(next){}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int num1=0,num2=0,carry=0, sum=0;
    ListNode * head1 = l1, * head2 = l2;
    
    ListNode * head = NULL;
    ListNode * nxt = NULL;
    
    while(head1!=NULL || head2!= NULL)
    {
        if(head1!=NULL)
        {
            num1 = head1->val;
            head1=head1->next;
        }
        else num1 = 0;
        
        if(head2!=NULL)
        {
            num2  = head2->val;
            head2 = head2->next;
        }
        else num2 = 0;
        
        sum = (num1+num2+carry)%10;
        carry = (num1+num2+carry)/10;
        
        ListNode * n = new ListNode(sum);
        if(head==NULL)
        {
            head = n;
            nxt = n;
        }
        else
        {
            nxt->next = n;
            nxt = n;
        }
    }
    
    if(carry !=0)
    {
        ListNode * n = new ListNode(carry);
        nxt->next = n;
        nxt = n;
    }
    return head;
}


int main(){

    int size1;
    ListNode * l1 = NULL;
    ListNode * nxt1 = NULL;
    cout<<"Size1: ";
    cin>>size1;
    for(int i=0;i<size1;i++)
    {
        int val;
        cin>>val;
        ListNode * n = new ListNode(val);
        if(l1==NULL)
        {
            l1 = nxt1 = n;
        }
        else{
            nxt1->next = n;
            nxt1 = n;
        }
    }

    cout<<"Size2: ";
    int size2;
    ListNode* l2 =NULL, *nxt2 = NULL;

    cin>>size2;

    for(int i=0;i<size1;i++)
    {
        int val;
        cin>>val;
        ListNode * n = new ListNode(val);
        if(l2==NULL)
        {
            l2 = nxt2 = n;
        }
        else{
            nxt2->next = n;
            nxt2 = n;
        }
    }

    ListNode * ans = addTwoNumbers(l1, l2);

    ListNode * temp = ans;

    cout<<"Answer: ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }

}