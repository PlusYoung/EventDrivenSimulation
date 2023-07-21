#include "FIFOQueueClass.h"

//Default Constructor. Will properly initialize a queue to
//be an empty queue, to which values can be added.
FIFOQueueClass::FIFOQueueClass()
{
    head = NULL;
    tail = NULL;
}

//Destructor. Responsible for making sure any dynamic memory
//associated with an object is freed up when the object is
//being destroyed.
FIFOQueueClass::~FIFOQueueClass()
{
    clear();
}

//Inserts the value provided (newItem) into the queue.
void FIFOQueueClass::enqueue(const int &newItem)
{
    LinkedNodeClass *insertNode;
    //check if the queue is empty
    if(head == NULL)
    {
        insertNode = new LinkedNodeClass(NULL, newItem, NULL);
        head = insertNode;
        tail = insertNode;
    }
    else
    {
        insertNode = new LinkedNodeClass(tail, newItem, NULL);
        insertNode->setBeforeAndAfterPointers();
        tail = insertNode;
    }
}

//Attempts to take the next item out of the queue. If the
//queue is empty, the function returns false and the state
//of the reference parameter (outItem) is undefined. If the
//queue is not empty, the function returns true and outItem
//becomes a copy of the next item in the queue, which is
//removed from the data structure.
bool FIFOQueueClass::dequeue(int &outItem)
{
    //check if the queue is empty
    if(head == NULL)
    {
        return false;
    }
    else if(head->getNext() == NULL)
    {
        LinkedNodeClass *temp;
        temp = head;
        outItem = temp->getValue();
        delete temp;
        tail = NULL;
        head = NULL;
        temp = NULL;
        return true;
    }
    else
    {
        outItem = head->getValue();
        head = head->getNext();
        delete head->getPrev();
        head->setPreviousPointerToNull();
        return true;
    }
}

//Prints out the contents of the queue. All printing is done
//on one line, using a single space to separate values, and a
//single newline character is printed at the end.
void FIFOQueueClass::print() const
{
    //represent the node for while loop
    LinkedNodeClass *tempNode;
    tempNode = head;
    while(tempNode != NULL)
    {
        cout << tempNode->getValue() << " ";
        tempNode = tempNode->getNext();
    }
    cout << endl;
}

//Returns the number of nodes contained in the queue.
int FIFOQueueClass::getNumElems() const
{
    //initialize the count number as 0
    int count = 0;
    //represent the node for counting in loop
    LinkedNodeClass *countPtr;
    countPtr = head;
    while(countPtr != NULL)
    {
        count ++;
        countPtr = countPtr->getNext();
    }
    return count;
}

//Clears the queue to an empty state without resulting in any
//memory leaks.
void FIFOQueueClass::clear()
{
    //represent the node to be deleted
    LinkedNodeClass *deleteNode;
    //represent the node for while loop
    LinkedNodeClass *tempNode;
    deleteNode = head;
    tempNode = head;
    while(tempNode != NULL)
    {
        tempNode = tempNode->getNext();
        delete deleteNode;
        deleteNode = tempNode;
    }
    tail = NULL;
    head = NULL;
}