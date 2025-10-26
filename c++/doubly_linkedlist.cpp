#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};
class doublelist
{
    node *head;
    node *tail;

public:
    doublelist()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }
    }
    void push_back(int val)
    {
        node *newnode = new node(val);

        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            newnode->prev = tail;
            tail->next = newnode;
            tail = newnode;
        }
    }
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "empty";
        }

        else
        {
            node *temp = head;
            head = head->next;
            if (head != NULL)
            {
                head->prev = NULL;
                temp->next = NULL;
                delete temp;
            }
        }
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "empty";
        }
        else
        {
            node *temp = tail;
            tail = tail->prev;
            if (tail != NULL)
            {
                tail->next = NULL;
                temp->prev = NULL;
                delete temp;
            }
        }
    }
    void print()
    {
        if (head == NULL)
        {
            return;
        }
        else
        {
            node *temp = head;
            while (temp != NULL)
            {
                cout << "  " << temp->data;
                temp = temp->next;
            }
        }
    }
};

int main()
{
    doublelist dl;
    dl.push_back(1);
    dl.push_back(2);
    dl.push_back(3);
    dl.push_back(4);
    dl.push_back(5);
    dl.pop_front();
    dl.pop_front();
    dl.pop_back();
    dl.print();

    return 0;
}