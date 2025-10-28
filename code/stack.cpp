#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node() : data(0), next(nullptr){}
    Node(int val) : data(val), next(nullptr){}
};
class stack
{
private: 
    Node* top;
public:
    stack() : top(nullptr){}
    void push(int val)
    {
        Node* newnode = new Node;
        newnode->data = val;
        newnode->next = top;
        top = newnode;
    }
    void pop()
    {
        if(!top)
        {
            cout << "empty";
            return;
        }
        Node* tem = new Node;
        top = top->next;
        delete tem;
    }
    int peek()
    {
        if(!top)
        {
            cout << "empty";
            return -1;
        }
        return top->data;
    }
    bool isEmpty() {
        return top == nullptr;
    }
    void print()
    {
        Node* tem = top;
        cout << "top -> ";
        while(tem)
        {
            cout << tem->data << " -> ";
            tem=tem->next;
        }
        cout << endl;
    }
};
int main() {
    stack st;

    cout << "=== Stack ���� ===\n";
    st.push(10);
    st.push(20);
    st.push(30);
    st.print();  // Top -> 30 20 10

    cout << "Pop �@��:\n";
    st.pop();
    st.print();  // Top -> 20 10

    cout << "�ثe���ݤ���: " << st.peek() << endl;

    return 0;
}