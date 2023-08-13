#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll P = 1e9 + 7;
struct Node
{
    int val;
    Node *left, *right;
    Node(int data)
    {
        val = data;
        left = right = NULL;
    }
};
void creatNode(Node *root, int data, char way)
{
    if (way == 'L')
        root->left = new Node(data);
    else
        root->right = new Node(data);
}
void insertNode(Node *root, int data1, int data2, char way)
{
    if (!root)
        return;
    if (root->val == data1)
    {
        creatNode(root, data2, way);
    }
    else
    {
        insertNode(root->left, data1, data2, way);
        insertNode(root->right, data1, data2, way);
    }
}
Node *init(int n)
{
    Node *root = NULL;
    for (int i = 0; i < n; i++)
    {
        int data1, data2;
        char way;
        cin >> data1 >> data2 >> way;
        if (!root)
        {
            root = new Node(data1);
            creatNode(root, data2, way);
        }
        else
            insertNode(root, data1, data2, way);
    }
    return root;
}
bool equalBiTree(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 != NULL && root2 != NULL)
    {
        return (
            root1->val == root2->val &&
            equalBiTree(root1->left, root2->left) &&
            equalBiTree(root1->right, root2->right));
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        Node *root1 = NULL, *root2 = NULL;
        string s;
        cin >> n;
        root1 = init(n);
        cin >> m;
        root2 = init(m);
        if (equalBiTree(root1, root2))
            cout << 1;
        else
            cout << 0;
        cout << endl;
    }
}