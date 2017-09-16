//
// Created by arturocv on 15/09/17.
//

#ifndef SORTALGORITHMS_AVLNODE_H
#define SORTALGORITHMS_AVLNODE_H

template <class T>
class AVLNode {
private:
    T data;
    int balanceFactor = 0;
    AVLNode *left = nullptr;
    AVLNode *right = nullptr;

public:
    AVLNode(T data);

    T getData();

    void setData(T data);

    int getBalanceFactor();

    void setBalanceFactor(int balanceFactor);

    AVLNode *getLeft();

    void setLeft(AVLNode *left);

    AVLNode *getRight();

    void setRight(AVLNode *right);
};


#endif //SORTALGORITHMS_AVLNODE_H
