#include <iostream>
#include "DataStructures/LinkedList.cpp"
#include "Sorts/SortAlgorithms.cpp"

using namespace std;

int main() {
    LinkedList<int> *list = new LinkedList<int>();

    /*list->insertElement(0, 0);
    list->insertElement(1, 1);
    list->insertElement(2, 2);
    list->insertElement(3, 3);
    list->insertElement(4, 4);*/

    list->insertAtFirst(1);
    list->insertAtFirst(4);
    list->insertAtFirst(2);
    list->insertAtFirst(5);
    list->insertAtFirst(6);
    list->insertAtFirst(3);
    list->insertAtFirst(0);

    //cout << ("hola") << endl;

    list->printList();

    SortAlgorithms<int>::quickSort(list);

    list->printList();

    //cout << () << endl;
    return 0;
}