#include <iostream>
#include <vector>

struct node {
    int value;
    node* next;
};
struct linkedList
{
    node* head;
    node* last;
    linkedList() {
        head = nullptr;
        last = nullptr;
    }

    bool isEmpty() {
        if (head == nullptr) {
            return true;
        } else {
            return false;
        }
    }

    void insertAsFirstElement(int newValue) {

        node* tempNode = new node();
        tempNode->value = newValue;
        tempNode->next = nullptr;
        head = tempNode;
        last = tempNode;
        

    }

    void insert(int newValue) {
        if (isEmpty()) {
            insertAsFirstElement(newValue);
        } else {
            node* tempNode = new node();
            tempNode->value = newValue;
            tempNode->next = head;
            head = tempNode;
            
        }
    }
    void remove() {
        if (isEmpty()) {
            std::cout << "The linked list is already empty.\n";
        } else if (head == last) {
            delete head;
            head = last = nullptr;
        } else {
            node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void showList() {
        if (isEmpty()) {
            std::cout << "The list is empty!\n";
        } else {
            node* curr = head;
            while(curr != nullptr) {
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

