#include <iostream>
using namespace std;

void traverse(Node *head)
{
    Node * temp = head;
if(head == nullptr)
{
cout<<"Empty list";
return ;
}
    while(temp->next != nullptr)
        {
            cout<<temp->info<<endl;
            temp = temp->next;
}
void insertBeg(Node *&head, int info)
{
    Node * newNode = new Node(info);
    newNode->next =  head;
    head = newNode;
}
void insertLast(Node *&head, int info)
{
    Node*newNode = new Node(info);
    if(head == nullptr)
    {
        head = newNode;
        return;
    }
    Node * temp = head;
    while(temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}
Node *search(Node *&head, int data)
{
    Node * temp = head;
    while(temp != nullptr)
        {
            if(temp->info == data)
            return temp;
            temp = temp->next;
        }
    return nullptr;
}
void insertAfter(Node *&head, int data, int info)
{
    Node * temp = search(head,data);
    if (temp == nullptr)
        {
            cout<<data<<"Not found"<<endl;
            return;     
      } 
    Node * newNode = new Node(info);
    newNode->next = temp->next;
    temp->next = newNode;  
}
void removeBeg(Node *&head)
{ 
}
void removeLast(Node *&head)
{
}
void removeAfter(Node *&head, Node *current)
{
}
void insertbefore(head,data,info)//list mai data ko dhoondho//
{
    Node * isfound = search(head,data);
    if(isfound == nullptr)
    {
    }
        Node * previous, * current;
        currentg = head;
        while(current-> info != data)
            {
                previous = current;
                current = current->next;
            }
}
int main()
{
    LinkedList list;
    int ch, info;
    do
    {
        cout << "1.........Add Begining" << endl
             << "2.........Add Last" << endl
             << "3.........Add After" << endl
             << "4.........Remove Begining" << endl
             << "5.........Remove Last" << endl
             << "6.........Remove After" << endl
             << "7.........Search" << endl
             << "8.........Show" << endl
             << "9.........Exit" << endl
             << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter info: ";
            cin >> info;
            break;
        case 2:
            cout << "Enter info: ";
            cin >> info;
            break;
        case 8:

            break;
        case 9:
            cout << "See you later" << endl;
            break;
        default:
            cout << "Not defined yet" << endl;
        }
    } while (ch != 9);
}
