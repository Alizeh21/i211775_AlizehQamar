// i211775_Alizeh_Lab4_Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Node
{
public:
    char data;
    Node* next;

    Node(char data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class List 
{
public:
    Node* head;

    List()
    {
        head = NULL;
    }

    bool isPalindrome(Node*& left, Node* right)
    {
        if (right == NULL)
            return true;

        bool isPal = isPalindrome(left, right->next);
        if (!isPal)
            return false;

        bool dataEqual = (left->data == right->data);

        left = left->next;

        return dataEqual;
    }

    bool checkPalindrome()
    {
        return isPalindrome(head, head);
    }
};

int main()
{
    List list;

    cout << "-------PALINDROME-LINKEDLIST-------" << endl << endl;
    // Manually creating and linking the nodes
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    cin.ignore();

    Node* prevNode = NULL;
    for (int i = 0; i < n; ++i) 
    {
        cout << "Enter data for node " << i + 1 << ": ";
        char data;
        cin >> data;

        Node* newNode = new Node(data);
        if (i == 0) {
            list.head = newNode;
        }
        else {
            prevNode->next = newNode;
        }
        prevNode = newNode;
    }

    if (list.checkPalindrome())
        cout << "The linked list is a palindrome.";
    else
        cout << "The linked list is not a palindrome.";

    cout << endl;
    return 0;
}


