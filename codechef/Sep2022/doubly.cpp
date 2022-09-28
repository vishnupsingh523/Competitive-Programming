#include <bits/stdc++.h>

using namespace std;


class DoublyLinkedListNode {
    public:
        int data;
        DoublyLinkedListNode *next;
        DoublyLinkedListNode *prev;

        DoublyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

class DoublyLinkedList {
    public:
        DoublyLinkedListNode *head;
        DoublyLinkedListNode *tail;

        DoublyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            DoublyLinkedListNode* node = new DoublyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
                node->prev = this->tail;
            }

            this->tail = node;
        }
};

void print_doubly_linked_list(DoublyLinkedListNode* node) {
    while (node!=nullptr) {
        cout<<node->data<<" ";

        node = node->next;
    }
}

/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    if(llist == nullptr)
    {
        DoublyLinkedListNode * n = new DoublyLinkedListNode(data);
        llist = n;
        return llist;
    }
    else {
        DoublyLinkedListNode * temp = llist;
        DoublyLinkedListNode * n = new DoublyLinkedListNode(data);
        // DoublyLinkedListNode * sample = NULL;
        // insertion at the beginning:
        if(temp->data>=data){
            n->next = temp;
            temp->prev = n;
            temp = n;
			return temp;
		}
        else{
            bool flag = true;
            while(temp->next!=nullptr)
            {
                if(temp->next->data > data)
                {
                    n->next = temp->next;
                    temp->next = n;
                    n->prev = temp;
                    if(n->next!=nullptr)
                    n->next->prev = n;
                    flag = false;
                    break;
                }
                temp = temp->next;
            }
            
            if(flag==true)
            {
                temp->next = n;
                n->prev = temp;
            }
            
        }
    }
    
    return llist;
}

int main()
{
	int t;
	cin >> t;

	for (int t_itr = 0; t_itr < t; t_itr++) {
        DoublyLinkedList* llist = new DoublyLinkedList();

		int llist_count = 0;
		cin >> llist_count;

		for (int i = 0; i < llist_count; i++) {
            string llist_item_temp;
            getline(cin, llist_item_temp);

            int llist_item = 0;
			cin >> llist_item;
			llist->insert_node(llist_item);
        }


        int data = 0;
		cin >> data;

        DoublyLinkedListNode* llist1 = sortedInsert(llist->head, data);

		print_doubly_linked_list(llist1);
    }


    return 0;
}
