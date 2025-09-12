#include <iostream>
using namespace std;
struct Node{
int info;
Node*next;
Node:info(0),next(nullptr){}
Node(data):info(data),next(nullptr){}
}

void traverse(Node *head)
{
}
void insertBeg(Node *&head, int info)
{
}
void insertLast(Node *&head, int info)
{
}
Node *search(Node *&head, int data)
{
}
void insertAfter(Node *&head, int data, int info)
{
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
