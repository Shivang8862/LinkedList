#include <iostream>
using namespace std;
struct Node {
    int info;
    Node *next;
    Node(int data) : info(data), next(nullptr) {}
};
void traverse(Node *head) {
    if (head == nullptr) {
        cout << "Empty list" << endl;
        return;
    }
    Node *temp = head;
    do {
        cout << temp->info << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
void insertBeg(Node *&head, int info) {
    Node *newNode = new Node(info);
    if (head == nullptr) {
        head = newNode;
        head->next = head;
        return;
    }
    Node *last = head;
    while (last->next != head)
        last = last->next;
    newNode->next = head;
    last->next = newNode;
    head = newNode;
}
void insertLast(Node *&head, int info) {
    Node *newNode = new Node(info);
    if (head == nullptr) {
        head = newNode;
        head->next = head;
        return;
    }
    Node *last = head;
    while (last->next != head)
        last = last->next;
    last->next = newNode;
    newNode->next = head;
}
Node *search(Node *head, int data) {
    if (head == nullptr) return nullptr;
    Node *temp = head;
    do {
        if (temp->info == data) return temp;
        temp = temp->next;
    } while (temp != head);
    return nullptr;
}
void insertAfter(Node *&head, int data, int info) {
    Node *temp = search(head, data);
    if (temp == nullptr) {
        cout << data << " not found" << endl;
        return;
    }
    Node *newNode = new Node(info);
    newNode->next = temp->next;
    temp->next = newNode;
}
void removeBeg(Node *&head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == head) {
        delete head;
        head = nullptr;
        return;
    }
    Node *last = head;
    while (last->next != head)
        last = last->next;
    Node *temp = head;
    head = head->next;
    last->next = head;
    delete temp;
}
void removeLast(Node *&head) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == head) { 
        delete head;
        head = nullptr;
        return;
    }
    Node *temp = head;
    while (temp->next->next != head)
        temp = temp->next;
    Node *last = temp->next;
    temp->next = head;
    delete last;
}
void removeAfter(Node *&head, int data) {
    Node *temp = search(head, data);
    if (temp == nullptr || temp->next == head) {
        cout << "Cannot remove after " << data << endl;
        return;
    }
    Node *delNode = temp->next;
    temp->next = delNode->next;
    delete delNode;
}
int main() {
    Node *head = nullptr;
    int ch, info, data;
    do {
        cout << "\n===== CIRCULAR LINKED LIST MENU =====" << endl;
        cout << "1. Add Beginning" << endl;
        cout << "2. Add Last" << endl;
        cout << "3. Add After" << endl;
        cout << "4. Remove Beginning" << endl;
        cout << "5. Remove Last" << endl;
        cout << "6. Remove After" << endl;
        cout << "7. Search" << endl;
        cout << "8. Show" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch) {
        case 1:
            cout << "Enter info: ";
            cin >> info;
            insertBeg(head, info);
            break;
        case 2:
            cout << "Enter info: ";
            cin >> info;
            insertLast(head, info);
            break;
        case 3:
            cout << "Enter node value after which to insert: ";
            cin >> data;
            cout << "Enter new info: ";
            cin >> info;
            insertAfter(head, data, info);
            break;
        case 4:
            removeBeg(head);
            break;
        case 5:
            removeLast(head);
            break;
        case 6:
            cout << "Enter node value after which to remove: ";
            cin >> data;
            removeAfter(head, data);
            break;
        case 7:
            cout << "Enter value to search: ";
            cin >> data;
            if (search(head, data))
                cout << data << " found" << endl;
            else
                cout << data << " not found" << endl;
            break;
        case 8:
            traverse(head);
            break;
        case 9:
            cout << "See you later" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (ch != 9);
  return 0;
}
