#include <iostream>
#include <vector>
#include <fstream>

/*
*   author: Rasul Yunusov
*   Vk: https://vk.com/yunusov_rasul
*   Telegram: @Road220
*   email: rasuldag220@gmail.com
*/

struct node {
    node* nextPointer;
    node* prevPointer;
    int value;
};

void initialize(node** tail, node** head, int newValue);
void reverse(node** headRef, node** tail);
bool isContained (node* tempNode, int newValue);
node* merge(node** headFirstList, node** headSecondList, node** firstTail, node** secondTail);
void insertBeggining(node** tail, int newValue);
void printList(node* tmpNode);
void insertEnd(node** head, int newValue);


int main () {

    node* headFirst = nullptr;
    node* tailFirst = nullptr;

    initialize(&tailFirst, &headFirst, 1);
    insertBeggining(&tailFirst, 2);
    insertBeggining(&tailFirst, 3);
    insertBeggining(&tailFirst, 4);


    //? let's try to reverse the first linked lists with elements {1,2,3,4}
    //! reverse(&headFirst, &tailFirst);
    //! printList(tailFirst); // We got {1, 2, 3, 4}
    
    //? if you would try to add not unique element, it would not work, cuz linked lists can contain only unique elements. 
    //? let's try to add {1, 2, 3, 4} again in our first linked list and see what will happen
    //! insertBeggining(&tailFirst, 1);
    //! insertBeggining(&tailFirst, 2);
    //! insertBeggining(&tailFirst, 3);
    //! insertBeggining(&tailFirst, 4);
    //! printList(tailFirst); // We got {4, 3, 2, 1} instead of {4, 3, 2, 1, 4, 3, 2, 1}

    //? For mergering two linked lists we need to reset headFirst and headSecond pointers of our first linked list
    //? and create headSecond, tailSecond for our second linked list!
    //!delete headFirst;
    //!delete tailFirst;
    //!headFirst = nullptr;
    //!tailFirst = nullptr;
    //!node* headSecond = nullptr;
    //!node* tailSecond = nullptr;
    //!
    //!std::ifstream inputFirstFile("first");        
    //! // Check if exists and then open the file.
    //!if (inputFirstFile.good()) {
    //!    // Push items into a first linked list
    //!    int currentNumber = 0;
    //!    int localCnt = 0;
    //!    while (inputFirstFile >> currentNumber){
    //!        if (localCnt == 0) {
    //!            initialize(&tailFirst, &headFirst, currentNumber);
    //!        } else {
    //!            insertBeggining(&tailFirst, currentNumber);
    //!        }
    //!        
    //!        localCnt++;
    //!    }
    //!} else {
    //!    std::cout << "Cannot open the first file to red!\n";
    //!}
    //!inputFirstFile.close();
    //!
    //!std::ifstream inputSecondFile("second");        
    //! //Check if exists and then open the file.
    //!if (inputSecondFile.good()) {
    //!    // Push items into a first linked list
    //!    int currentNumber = 0;
    //!    int localCnt = 0;
    //!    while (inputSecondFile >> currentNumber){
    //!        if (localCnt == 0) {
    //!            initialize(&tailSecond, &headSecond, currentNumber);
    //!        } else {
    //!            insertBeggining(&tailSecond, currentNumber);
    //!        }
    //!        localCnt++;
    //!    }
    //!} else {
    //!    std::cout << "Cannot open the second file to red!\n";
    //!}
    //!inputSecondFile.close();
    //!printList(merge(&headFirst, &headSecond, &tailFirst, &tailSecond));
}

void reverse(node** headRef, node** tail){
    node* curr = *tail;

    while(curr != nullptr) {
        node* next = curr->nextPointer;

        curr->nextPointer = curr->prevPointer;
        curr->prevPointer = next;
        curr = next;
    }

    node* aux = *tail;
    *tail = *headRef;
    *headRef = aux;
}

bool isContained (node* tempNode, int newValue) {
    while (tempNode != nullptr) {
        if (newValue == tempNode->value) return true;
        tempNode = tempNode->nextPointer;
    }
    return false;
}

node* merge(node** headFirstList, node** headSecondList, node** firstTail, node** secondTail){
    node* firstListcurr = *firstTail;
    node* secondListcurr = *secondTail;

    node* newListHead = nullptr;
    node* newListTail = nullptr;
    node* newListCurr = nullptr;

    while(firstListcurr != nullptr) {
    
        if (!(isContained(*secondTail, firstListcurr->value))) {
            if (newListHead == nullptr) {
                initialize(&newListTail, &newListHead, firstListcurr->value);
            } else {
                insertEnd(&newListHead, firstListcurr->value);
            }
        }
        firstListcurr = firstListcurr->nextPointer;
    }
    node* aux = *firstTail;
    *firstTail = *headFirstList;
    *headFirstList = aux;

    while(secondListcurr != nullptr) {
    
        if (!(isContained(*headFirstList, secondListcurr->value))) {
            if (newListHead == nullptr) {
                initialize(&newListTail, &newListHead, secondListcurr->value);
            } else {
                insertEnd(&newListHead, secondListcurr->value);
            }
        }
        secondListcurr = secondListcurr->nextPointer;
    }

    aux = *secondTail;
    *secondTail = *headSecondList;
    *headSecondList = aux;

    return newListTail;
}

void insertBeggining(node** tail, int newValue) {
    
    if (!(isContained(*tail, newValue))) {
        node* newNode = new node();
        if (newNode == nullptr) {
            exit(1);
            return;
        }
        newNode->value = newValue;
        newNode->prevPointer = nullptr;
        newNode->nextPointer = *tail;
        if (*tail != nullptr) {
            (*tail)->prevPointer = newNode;
        }
        *tail = newNode;
    }

}
void insertEnd(node** head, int newValue) {
    node* newNode = new node();
    if (newNode == nullptr) {
        exit(3);
        return;
    }
    newNode->value = newValue;
    newNode->nextPointer = nullptr;
    newNode->prevPointer = *head;
    (*head)->nextPointer = newNode;
    *head = newNode;
}
void initialize(node** tail, node** head, int newValue) {
    node* newNode = new node();
    if (newNode == nullptr) {
        exit(2);
        return;
    }
    newNode->value = newValue;
    newNode->prevPointer = nullptr;
    newNode->nextPointer = nullptr;

    *tail = newNode;
    *head = newNode;

}

void printList(node* tmpNode)
{
    while(tmpNode != nullptr) {
        std::cout << tmpNode->value << " ";
        tmpNode = tmpNode->nextPointer;
    }
}