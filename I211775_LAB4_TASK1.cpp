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

    void swapNodes()
    {
        if (head == NULL || head->next == NULL)
            return;

        Node* prev = head;
        Node* curr = head->next;

        head = curr;

        while (true)
        {
            Node* next = curr->next;
            curr->next = prev;

            if (next == NULL || next->next == NULL) 
            {
                prev->next = next;
                break;
            }

            prev->next = next->next;

            prev = next;
            curr = prev->next;
        }
    }

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

    cout << "--------SWAPPING-THE-LINKED-LIST---------" << endl << endl;
    cout << "Linked list before calling swapNodes() ";
    list.printList();

    list.swapNodes();
    cout << endl;
    cout << "\nLinked list after calling swapNodes() ";
    list.printList();
    cout << endl;
    return 0;
}
