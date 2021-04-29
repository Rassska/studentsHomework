#include <iostream>
#include <vector>

struct node {  // element of our linkedList
    int value; // value of current node
    node* next; // pointer to the next node
};
struct linkedList // Data structure that contains nodes
{
    node* head; // pointer to the first node
    node* last; // pointer to the last node
    
    linkedList() {
        head = nullptr;
        last = nullptr;
    }

    bool isEmpty() { // does linked list empty or not?
        if (head == nullptr) {
            return true;
        } else {
            return false;
        }
    }

    void insertAsFirstElement(int newValue) { // if linked list has no nodes

        node* tempNode = new node();
        tempNode->value = newValue;
        tempNode->next = nullptr;
        head = tempNode; // head and last would be equal to our first node
        last = tempNode;
        

    }

    void insert(int newValue) { 
        if (isEmpty()) {
            insertAsFirstElement(newValue); // if linked list has no nodes
        } else {                            // if linked list has no nodes
            node* tempNode = new node();    // new node to add
            tempNode->value = newValue;     // setting up a value of new node
            tempNode->next = head;          // setting up a next element as a head, cuz we need to insert as a first element of linked list
            head = tempNode;                // and head is equal to our new node
            
        }
    }
    void remove() {
        if (isEmpty()) {
            std::cout << "The linked list is already empty.\n";
        } else if (head == last) {  // if there is one node in linked list
            delete head;
            head = last = nullptr;
        } else {                    // there are more than one nodes
            node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void showList() {
        if (isEmpty()) {
            std::cout << "The list is empty!\n";
        } else {
            node* curr = head;      // new pointer to explore our linked list
            while(curr != nullptr) {      // till the end of linked list
                std::cout << curr->value << ' ';
                curr = curr->next;
            }
            std::cout << '\n';
        }
    }
};

int main () {

    std::size_t n;
    std::cout << "Please, input the size of your array!\n";
    std::cin >> n;
    std::vector<linkedList> vectorOfLinkedLists(n);
    std::size_t keyPosition = 100;
    
    vectorOfLinkedLists[keyPosition % n].insert(50);
    keyPosition = 20;
    vectorOfLinkedLists[keyPosition % n].insert(500);
    keyPosition = 34;
    vectorOfLinkedLists[keyPosition % n].insert(5007);

    vectorOfLinkedLists[keyPosition % n].remove();
    keyPosition = 20;
    vectorOfLinkedLists[keyPosition % n].remove();
    keyPosition = 100;
    vectorOfLinkedLists[keyPosition % n].showList();

    keyPosition = 34;
    vectorOfLinkedLists[keyPosition % n].showList();

    keyPosition = 20;
    vectorOfLinkedLists[keyPosition % n].showList();


    

}

