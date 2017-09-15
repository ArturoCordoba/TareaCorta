#include <iostream>
#include "DataStructures/LinkedList.cpp"

using namespace std;

int main() {
    LinkedList<int> *list = new LinkedList<int>();

    list->insertElement(0, 0);
    list->insertElement(1, 1);
    list->insertElement(2, 2);
    list->insertElement(3, 3);
    list->insertElement(4, 4);

    //list->insertAtFirst(1);
    //list->insertAtFirst(1);
    //list->insertAtFirst(1);
    //list->insertAtFirst(1);


    delete list;

    //cout << ("hola") << endl;

    //list->printList();

    //cout << () << endl;
    return 0;
}