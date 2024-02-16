// i211775_Alizeh_Lab4_Task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

class List 
{
public:
    Node* head;

    List()
    {
        head = NULL;
    }

    void groupOddNodes()
    {
        if (head == NULL)
            return;

        Node* odd = head;
        Node* even = head->next;
        Node* evenHead = even;

        while (even != NULL && even->next != NULL)
        {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;
    }

    void printList()
    {
        Node* node = head;
        while (node != NULL)
        {
            cout << node->data << " -> ";
            node = node->next;
        }
        cout << "NULL";
    }
};

int main()
{
    List list;

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

    cout << "-----GROUPING-ODD-DATA-IN-A-LIST-----" << endl << endl;
    cout << "Given: ";
    list.printList();

    list.groupOddNodes();

    cout << "\nReturn: ";
    list.printList();

    cout << endl;

    return 0;
}
