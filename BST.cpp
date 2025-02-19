
#define H_BST
#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std; 
#include "BSTnode_header.h"

int main() {
    cout << "Binary Search Tree Example" << endl;

    BSTnode *root = new BSTnode(10); //create a new node with the value of 10
    root->insert(5); //insert 5 into the tree
    root->insert(15); //insert 15 into the tree
    root->insert(8); //insert 8 into the tree
    root->insert(3); //insert 3 into the tree
    root->insert(20); //insert 20 into the tree


    return 0;
}