#include <iostream>
using namespace std;

template<typename T>
class Node 
{
private:
    T data;
    Node* next;
public:
};

//   Node* head =new Node();
//   head->next=new Node();
//   head->next->next=new Node();

template<typename L>
class LinkedList
{
private:
    Node<L>* head;
    Node<L>* tail;
    Node<L>* temp;

public:
    void List()
    {
        temp=head;
        while (temp->next!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    int Length()
    {
        temp=head;
        int counter=0;
        while (temp->next!=NULL)
        {
            counter++;
            temp=temp->next;
        }
        return counter;
    }
};

int main()
{

    
}
 