#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void print(Node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* input()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;

    while (data != -1)
    {
        // CReating ll
        Node *n = new Node(data);

        /// check node is first

        if (head == NULL)
        {
            head = n;
            tail = n;
        }

        else
        {
            // Data is already present
            tail->next = n;
            tail = n;
        }

        cin >> data;
    }
    return head;
}
int main()
{

    Node n1(1);
    Node *head = &n1;
    Node n2(2);

    n1.next = &n2;

    head=input();
    print(head);
    return 0;
}