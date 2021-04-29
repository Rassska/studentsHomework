#include <iostream>

class linkedList
{
private:
    typedef struct node {
        int value;
        node* next;
    } node;

    nodePtr head;
    nodePtr curr;
    nodePtr temp;

public:
    linkedList::linkedList() {
        head = nullptr;
        curr = nullptr;
        temp = nullptr;
    }
    linkedList::~linkedList() = default;

    void addNode(int newValue) {

    }
    void DeleteNode(int valueToDelete) {

    }
    void printList() {

    }
};



int main () {
    
}