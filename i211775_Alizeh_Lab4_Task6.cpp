// i211775_Alizeh_Lab4_Task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Node class
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

// LinkedList class
class LinkedList
{
public:
    Node* head;
    LinkedList() : head(NULL) {}

    // Function to add a new node at the end
    void append(int new_data)
    {
        Node* new_node = new Node(new_data);

        if (head == NULL)
        {
            head = new_node;
            return;
        }

        Node* last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }

        last->next = new_node;
    }

    // Function to move the last node to the front
    void moveToFront()
    {
        if (head == NULL || head->next == NULL)
            return;

        Node* secLast = NULL;
        Node* last = head;

        while (last->next != NULL)
        {
            secLast = last;
            last = last->next;
        }

        secLast->next = NULL;
        last->next = head;
        head = last;
    }

    // Function to print the linked list
    void printList()
    {
        Node* node = head;
        while (node != NULL)
        {
            cout << node->data << " ";
            node = node->next;
        }
    }
};

int main()
{
    LinkedList list;

    cout << "-----MOVING-THE-LAST-NODE-TO-THE-FRONT-----<<endl<<endl";

    // Create the linked list 1->2->3->4
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);

    cout << "Given linked list \n";
    list.printList();
    list.moveToFront();

    cout << endl;

    cout << "\nAfter moving last to front \n";
    list.printList();

    cout << endl;

    return 0;
}
