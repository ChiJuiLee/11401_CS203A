#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node() : data(0), next(nullptr) {}
    Node(int val) : data(val), next(nullptr){}
};
class linkedlist 
{
private:
    Node* head;
public:
    linkedlist() : head(nullptr) {}
    void append(int val)//�s�W
    {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = nullptr;
        if(!head)
        {
            head = newNode;
            return;
        }
        Node* tem = head;
        while(tem->next)
            tem = tem->next;
        tem->next = newNode;
    }
    void remove(int val)//�R�����w��
    {
        if(!head)
            return;
        if(head->data==val)
        {
            Node* todelete = head->next;
            delete todelete;
            return;            
        }
        Node* tem = head;
        while(tem->next && tem->next->data!=val)
            tem = tem->next;
        if(tem->next)
        {
            Node* todelete = tem->next;
            tem->next=tem->next->next;
            delete todelete;
        }
    }
    void print()
    {
        Node* tem = head;
        while(tem)
        {
            cout << tem->data << " -> ";
            tem = tem->next;
        }
        cout << "null";
    }
};
int main()
{
    linkedlist list;

    // ���J�`�I
    list.append(10);
    list.append(20);
    list.append(30);
    cout << "�ثe�� linked list: ";
    list.print();

    // �R���`�I
    cout << "�R���`�I 20 ��: ";
    list.remove(20);
    list.print();

    // �A���J�X�Ӹ`�I
    list.append(40);
    list.append(50);
    cout << "�[�J 40 �M 50 ��: ";
    list.print();

    return 0;
}