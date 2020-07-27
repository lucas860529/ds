// Linked List for Graph
// use Lisnked List as Queue 
// can push for both end
#include <iostream>

using namespace std;
class ListNode{
    public:
        int data;
        ListNode* next;
        ListNode(int d){
            this-> next;
            this->data = d;
        };
};

class LinkedList {
    public:
        ListNode *first;
        ListNode *tail;
        LinkedList() {
            first = 0;
            tail = 0;
        }
        void push_array(int array[]){
            for(int i = 0; i < sizeof(*array); i++) {
                push(array[i]);
            }
        };

        void push(int d) {
            ListNode *n = new ListNode(d);
            if (first == 0) {
                first = n;
                tail = n;
                return;
            }

            tail->next = n;
            tail = n;
        };

        void print() {
            ListNode *p = first;
            while (p != 0) {
                cout << p->data << "->";
                p = p->next;
            }

            cout << "%" << endl;
        }
};