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
    void append(int val)//新增
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
    void remove(int val)//刪除指定值
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

    // 插入節點
    list.append(10);
    list.append(20);
    list.append(30);
    cout << "目前的 linked list: ";
    list.print();

    // 刪除節點
    cout << "刪除節點 20 後: ";
    list.remove(20);
    list.print();

    // 再插入幾個節點
    list.append(40);
    list.append(50);
    cout << "加入 40 和 50 後: ";
    list.print();

    return 0;
}