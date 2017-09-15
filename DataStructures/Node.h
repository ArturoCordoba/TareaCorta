//
// Created by arturocv on 14/09/17.
//

#ifndef SORTALGORITHMS_NODE_H
#define SORTALGORITHMS_NODE_H

template <class T>
class Node {
private:
    T data;
    Node<T> *next;

public:
    Node(T data);

    void setData(T data);

    T getData();

    void setNext(Node *next);

    Node* getNext();
};


#endif //SORTALGORITHMS_NODE_H
