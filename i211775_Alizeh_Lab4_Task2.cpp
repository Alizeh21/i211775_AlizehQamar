// i211775_Alizeh_Lab4_Task2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList 
{
public:
    Node* head;

    LinkedList() 
    {
        head = NULL;
    }

    bool search(int key)
    {
        Node* current = head;
        while (current != NULL)
        {
            if (current->data == key)
                return true;
            current = current->next;
        }
        return false;
    }
};

int main()
{
    LinkedList list;

    // Manually creating and linking the nodes
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);

    list.head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    cout << "-----------Searching-Through-LinkedList-----------" << endl << endl;
    int key;
    cout << "Enter a number to search in the linked list: ";
    cin >> key;

    if (list.search(key))
        cout << "Number found! \n\n";
    else
        cout << "Number not found!";

    return 0;
}
