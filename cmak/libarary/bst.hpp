//
// Created by asem on 01/04/18.countDNA.cppcountDNA.cpp
//

#ifndef SBE201_WORDCOUNT_MAPS_BST_HPP
#define SBE201_WORDCOUNT_MAPS_BST_HPP

#include <iostream>
#include <string>
#include <queue>

namespace bst
{

struct BSTNode
{
    std::string item;
    BSTNode *left;
    BSTNode *right;
};

using Tree = BSTNode *; //then instead of any BSTNode* use tree

Tree create()
{
    return nullptr;
}

bool isEmpty(Tree node)
{
    return node == nullptr; //this takes you to the tree and check it
}

bool isLeaf(Tree node)
{
    return node->left == nullptr && node->right == nullptr; //check for the two children
}

int size(Tree node)
{
    if (!isEmpty(node))
        return 1 + size(node->left) + size(node->right); //check for each right and left subtree and evaluate its size
    else
        return 0;
}

bool find(Tree tree, std::string item)
{
    if (isEmpty(tree))
        return false;
    else
    {
        if (item == tree->item) //congrats you're in the right place
            return true;

        else if (item < tree->item) //if less go left
            return find(tree->left, item);

        else
            return find(tree->right, item); //if bigger go right and repeat recursively
    }
}

void insert(Tree &tree, std::string item)
{
    if (isEmpty(tree))
        tree = new BSTNode{item, nullptr, nullptr}; //make a new node

    else
    {
        if (item < tree->item)        //if the input item is less than that of item in tree
            insert(tree->left, item); //less go to left

        else
            insert(tree->right, item); //bigger go to right
    }
}

Tree minNode(Tree tree)
{
    Tree current = tree; //to put value of tree in it
    if (tree != NULL)    //or if (!isEmpty)
    {
        if (current->left == NULL)
        {
            return tree; //as tree is lower than any right node
        }
        else
        {
            while (current->left != NULL) //leaf node
                current = current->left;  // current ptr moves to the most left node
        }
        return current; //to return item in current pointer
    }
    else
        return 0;
}

Tree maxNode(Tree tree)
{
    Tree current = tree;
    if (tree != NULL)
    {
        if (current->right == NULL) //as tree is greater than any left node
            return tree;
        else
        {
            while (current->right != NULL) //leaf node
                current = current->right;  // current ptr moves to the mpst left node
            return current;          //to return item in current pointer
        }
    }
    else
        return 0;
}

void remove(Tree &tree, std::string item)
{

    if (isEmpty(tree))
        return;

    if (item == tree->item)
    {
        if (!isEmpty(tree->left) && !isEmpty(tree->right))
        {
            Tree minRight = minNode(tree->right);
            tree->item = minRight->item;         //find min node in right subtree and make it root
            remove(tree->right, minRight->item); //remove the duplicate of the item you've put in the root from the right subtree
        }
        else
        {
            Tree discard = tree;

            if (isLeaf(tree)) //no children
                tree = nullptr;

            else if (!isEmpty(tree->left)) //1 child at left "btw, if this was at first condition it would make confusal between the 1 & 2 children"
                tree = tree->left;
            else
                tree = tree->right;

            delete discard; //to delete tree from dynamic
        }
    }
    else if (item < tree->item)
        remove(tree->left, item);
    else
        remove(tree->right, item);
}

/*the code i understand from before -they're the same-
    if (tree != NULL)
    {
        if (item < tree->item)
            remove(tree->left, item);
        else if (item > tree->item)
            remove(tree->right, item);

        else
        {
            //case 1 : if no child
            if (tree->left == NULL && tree->right == NULL)
            {
                delete tree; //then delete the tree as whole
                tree = NULL;
            }
            //case 2 : if if one child
            else if (tree->left == NULL) //if only a right child
            {
                Tree temp = tree; //new variable temp to see the tree and go to place you want
                tree = tree->right;
                delete temp;
            }
            else if (tree->right == NULL) //same but if only left child
            {
                Tree temp = tree;
                tree = tree->left;
                delete temp;
            }
            //case 3 : if 2 children
            else
            {
                Tree temp = minNode(tree->right);
                tree->item = temp->item; //put minimum value 
                remove(tree->right, temp->item); //delete duplicate of it from right subtree
            }
        }
    }
*/
void clear(Tree &tree)
{
    if (!isEmpty(tree))
    {
        clear(tree->left); //repeat for each element in subtrees
        clear(tree->right);
        delete tree; //delete from dynamic
        tree = nullptr;
    }
}

void preorder(Tree tree)
{
    if (tree) //where's the condition
    {
        std::cout << "[" << tree->item << "]";
        preorder(tree->left);
        preorder(tree->right);
    }
}

void inorder(Tree tree)
{
    if (tree)
    {
        inorder(tree->left);
        std::cout << "[" << tree->item << "]"; //for tree
        inorder(tree->right);
    }
}

void postorder(Tree tree)
{
    if (tree)
    {
        postorder(tree->left);
        postorder(tree->right);
        std::cout << "[" << tree->item << "]"; //you may not do this brackets they're just special decoration for the tree
    }
}

/*void breadthFirst(Tree tree)
{
    std::queue<std::string item> breadth; //make a queue takes data of type string called breadth
    breadth.push(tree->item);             //store root

    for (int i = 0; i < size(tree); ++i) //condition to take tree
    {
        if (tree->left != NULL)       //left subtree not empty
            breadth.push(tree->left); //then enqueue the element at left
        if (tree->right != NULL)
            breadth.push(tree->right);
    }
    while (breadth != NULL) //queue not empty
    {
        std::cout << breadth.pop << std::endl; //dequeue the elements
    }
}*/
}

#endif //SBE201_WORDCOUNT_MAPS_BST_HPP_HPP
