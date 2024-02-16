// i211775_Lab4_Task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class List
{
public:
    Node* head;

    List() {
        head = NULL;
    }

    void reverse() 
    {
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void printList()
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    List list;

    cout << "------REVERSING-A-LINKEDLIST-------" << endl << endl;
    // Manually creating and linking the nodes
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);

    list.head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    cout << "Given linked list: ";
    list.printList();

    list.reverse();

    cout << "\nReversed linked list: ";
    list.printList();
    
    cout << endl;
    return 0;
}

