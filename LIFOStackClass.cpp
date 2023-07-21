#include "LIFOStackClass.h"

//Default Constructor. Will properly initialize a stack to
//be an empty stack, to which values can be added.
LIFOStackClass::LIFOStackClass() {
    head = NULL;
    tail = NULL;
}

//Destructor. Responsible for making sure any dynamic memory
//associated with an object is freed up when the object is
//being destroyed.
LIFOStackClass::~LIFOStackClass() {
    clear();
}

//Inserts the value provided (newItem) into the stack.
void LIFOStackClass::push(const int &newItem) {
    LinkedNodeClass *insertNode;
    //check if the stack is empty
    if (head == NULL) {
        insertNode = new LinkedNodeClass(NULL, newItem, NULL);
        head = insertNode;
        tail = insertNode;
    } else {
        insertNode = new LinkedNodeClass(tail, newItem, NULL);
        insertNode->setBeforeAndAfterPointers();
        tail = insertNode;
    }
}

//Attempts to take the next item out of the stack. If the
//stack is empty, the function returns false and the state
//of the reference parameter (outItem) is undefined. If the
//stack is not empty, the function returns true and outItem
//becomes a copy of the next item in the stack, which is
//removed from the data structure.
bool LIFOStackClass::pop(int &outItem) {
    //check if the queue is empty
    if (head == NULL) {
        return false;
    } else if (head->getNext() == NULL) {
        LinkedNodeClass *temp;
        temp = tail;
        outItem = temp->getValue();
        delete temp;
        tail = NULL;
        head = NULL;
        temp = NULL;
        return true;
    } else {
        outItem = tail->getValue();
        tail = tail->getPrev();
        delete tail->getNext();
        tail->setNextPointerToNull();
        return true;
    }
}

//Prints out the contents of the stack. All printing is done
//on one line, using a single space to separate values, and a
//single newline character is printed at the end.
void LIFOStackClass::print() const {
    //represent the node for while loop
    LinkedNodeClass *tempNode;
    tempNode = head;
    while (tempNode != NULL) {
        cout << tempNode->getValue() << " ";
        tempNode = tempNode->getNext();
    }
    cout << endl;
}

//Returns the number of nodes contained in the stack.
int LIFOStackClass::getNumElems() const {
    //initialize the count number as 0
    int count = 0;
    //represent the node for counting in loop
    LinkedNodeClass *countPtr;
    countPtr = head;
    while (countPtr != NULL) {
        count++;
        countPtr = countPtr->getNext();
    }
    return count;
}

//Clears the stack to an empty state without resulting in any
//memory leaks.
void LIFOStackClass::clear() {
    //represent the node to be deleted
    LinkedNodeClass *deleteNode;
    //represent the node for while loop
    LinkedNodeClass *tempNode;
    deleteNode = head;
    tempNode = head;
    while (tempNode != NULL) {
        tempNode = tempNode->getNext();
        delete deleteNode;
        deleteNode = tempNode;
    }
    tail = NULL;
    head = NULL;
}
