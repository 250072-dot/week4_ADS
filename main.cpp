#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};

int main() {

    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();
    Node* last = new Node();


    first->data = 10;
    first->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = fifth;
    fifth->data = 50;
    fifth->next = last;
    last->data = 60;
    last->next = NULL;

    cout<<first->data<<" "<<second->data<<" "<<third->data<<endl;

    return 0;
}