//
// Created by arturocv on 15/09/17.
//

#ifndef SORTALGORITHMS_BINARYTREENODE_H
#define SORTALGORITHMS_BINARYTREENODE_H

template <class T>
class BinaryTreeNode {
private:
    T data;
    BinaryTreeNode<T> *left = nullptr;
    BinaryTreeNode<T> *right = nullptr;

public:
    BinaryTreeNode(T data1);

    BinaryTreeNode(T data1, BinaryTreeNode<T>* left1, BinaryTreeNode<T>* right1);

    T getData();

    void setData(T data);

    BinaryTreeNode<T>* getLeft();

    void setLeft(BinaryTreeNode<T> *left);

    BinaryTreeNode<T>* getRight();

    void setRight(BinaryTreeNode<T> *right);
};


#endif //SORTALGORITHMS_BINARYTREENODE_H
