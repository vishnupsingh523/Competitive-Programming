#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};

struct Node * addTwoNumbers(struct Node * list1, struct Node * list2){
    int a=0, b=0;
    
    while(list1!=NULL)
    {
        a = a*10 + list1->data;
        list1 = list1->next;
    }

    
    while(list2!=NULL)
    {
        b = b*10 + list2->data;
        list2 = list2->next;
    }

    cout<<"Answer: "<<(a+b);

    int sum = a+b;
    struct Node * head = NULL;
    while(sum!=0){
        struct Node * n = new struct Node();

        n->data = sum%10;
        n->next = head;
        head = n;

        sum = sum/10;

        
    }
    return head;
}

int main(){
    char state;
    int n;
    cin>>state;
    cin>>n;

    cout<<currentState(state, n);

}