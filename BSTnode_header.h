
#define H_BST

#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std; 

class BSTnode {
    public:
        int value; //sets value of node
        BSTnode *left;  //sets pointer to left child
        BSTnode *right; //sets pointer to right child

        BSTnode(int nodeVal)  //constructor for BSTnode 
        {
            value = nodeVal; //sets value of node to val because it is a constructor
            left = nullptr; //sets left child to null to start
            right = nullptr; //sets right child to null to start with no childe
        }

       void insert(int nodeVal) //inserts a node into the tree
       { 
        if (nodeVal < value) //if the value of node being inserted is less than the value of the currentnode already in the list
        {
            if (left == nullptr) //if the left child is null
            {
                left = new BSTnode(nodeVal); //create a new node with the value of the node being inserted
            }
            else
            {
                left->insert(nodeVal); //if the left child is not null, insert the node into the left child
            }
        }

        else if (nodeVal > value) //if the value of the node being inserted is greater than the value of the current node
        {
            if (right == nullptr) //if the right child is null or empty
            {
                right = new BSTnode(nodeVal); // create a new node with the value of the node being inserted
            }
            else
            {
                right->insert(nodeVal); //if the right is not null, insert into the right child
            } 
        }

        }
};