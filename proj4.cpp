//Project4 done by Yang Yang in 30th March.
//This project is for three data structures including
//a sorted double-linked list, a simple queue, and a simple stack.
//also have three classes for them.
//And there is also another class for the basis of these structure, linked node

#include "LinkedNodeClass.h"
#include "SortedListClass.h"
#include "FIFOQueueClass.h"
#include "LIFOStackClass.h"

#include <iostream>
using namespace std;

//Do NOT remove any of the preprocessor directives in this file.
//They should not affect your ability to write test code in your
//main function below, and they must be in your submitted main
//file exactly as provided to you with the project.
#ifdef ANDREW_TEST
#include "andrewTest.h"
#else

int main()
{
    //This is just a placeholder main function - it does exceptionally
    //little actual testing, so you'll want to add your own tests here.
    //Feel free to leave your tests in the version of this file you
    //submit, but we will not be running your main function, so the
    //output, etc., of your main doesn't need to match anything from
    //a sample output, etc.

    // Test SortedListClass
    SortedListClass testList;
    testList.printForward();
    testList.insertValue(42);
    testList.printForward();

    // Test FIFOQueueClass
    FIFOQueueClass testQueue;
    testQueue.enqueue(10);
    testQueue.enqueue(20);
    testQueue.enqueue(30);
    testQueue.print();
    int dequeuedItem;
    testQueue.dequeue(dequeuedItem);
    cout << "Dequeued item: " << dequeuedItem << endl;
    testQueue.print();

    // Test LIFOStackClass
    LIFOStackClass testStack;
    testStack.push(100);
    testStack.push(200);
    testStack.push(300);
    testStack.print();
    int poppedItem;
    testStack.pop(poppedItem);
    cout << "Popped item: " << poppedItem << endl;
    testStack.print();

    return 0;
}

#endif
