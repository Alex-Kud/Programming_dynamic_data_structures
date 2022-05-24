#include "BinarySearchTree.h"

/// <summary>
/// ����������� �� ���������
/// </summary>
BinarySearchTree::BinarySearchTree() {}

/// <summary>
/// ����������� � ����������
/// </summary>
/// <param name="data">�������� �����</param>
BinarySearchTree::BinarySearchTree(int data)
{
    tree.push_back({ data, -1, -1 });
}

/// <summary>
/// ���������� ������ ����������
/// </summary>
/// <param name="currIndex">������ ������� �������</param>
/// <param name="data">�������� ������������ ��������</param>
void BinarySearchTree::SetLeft(int currIndex, int data)
{
    tree[currIndex].left = tree.size();
    tree.push_back({ data, -1, -1 });
}

/// <summary>
/// ���������� ������� ����������
/// </summary>
/// <param name="currIndex">������ ������� �������</param>
/// <param name="data">�������� ������������ ��������</param>
void BinarySearchTree::SetRight(int currIndex, int data)
{
    tree[currIndex].right = tree.size();
    tree.push_back({ data, -1, -1 });
}

/// <summary>
/// �������� �� �������
/// </summary>
/// <returns>������ ��������� ��� ���</returns>
bool BinarySearchTree::IsEmpty() {
    return tree.size() == 0;
}

/// <summary>
/// ������� ��������
/// </summary>
/// <param name="data">��������</param>
void BinarySearchTree::Insert(int data)
{
    // ���������� ����� ����, ���� ������ ������
    if (IsEmpty())
    {
        tree.push_back({ data, -1, -1 });
        return;
    }

    int currentIndex = 0; // ������� �������
    while (currentIndex < tree.size())
    {
        if (tree[currentIndex].data == data) // ����������� �������� ����� �������� � ������� �������
            return;

        if (data < tree[currentIndex].data)
        {
            if (tree[currentIndex].left == -1)
            {
                SetLeft(currentIndex, data);
                return;
            }
            currentIndex = tree[currentIndex].left;
        }
        else
        {
            if (tree[currentIndex].right == -1)
            {
                SetRight(currentIndex, data);
                return;
            }
            currentIndex = tree[currentIndex].right;
        }
    }
}

/// <summary>
/// ����� ����� ������� / ������������ / ���������
/// </summary>
/// <param name="index">������ ������� �������</param>
void BinarySearchTree::CenterTraversal(int index)
{
    if (!IsEmpty()) {
        if (tree[index].left != -1)
            CenterTraversal(tree[index].left);
        cout << tree[index].data << " ";
        if (tree[index].right != -1)
            CenterTraversal(tree[index].right);
    }
}

/// <summary>
/// ����� ������ ���� / � ������� / ����������
/// </summary>
/// <param name="index">������ ������� �������</param>
void BinarySearchTree::PreTraversal(int index)
{
    if (!IsEmpty()) {
        cout << tree[index].data << " ";
        if (tree[index].left != -1)
            PreTraversal(tree[index].left);
        if (tree[index].right != -1)
            PreTraversal(tree[index].right);
    }
}

/// <summary>
/// ����� ����� ����� / � �������� ������� / �����������
/// </summary>
/// <param name="index">������ ������� �������</param>
void BinarySearchTree::PostTraversal(int index)
{
    if (!IsEmpty()) {
        if (tree[index].left != -1)
            PostTraversal(tree[index].left);
        if (tree[index].right != -1)
            PostTraversal(tree[index].right);
        cout << tree[index].data << " ";
    }
}

/// <summary>
/// ������� �������� ���������
/// </summary>
/// <param name="index">������ ������� �������</param>
void BinarySearchTree::DeleteNode(int index) {
    if (!IsEmpty()) {
        if (tree[index].left != -1) DeleteNode(tree[index].left);
        if (tree[index].right != -1) DeleteNode(tree[index].right);
        tree[index].data = INT_MAX;
    }
}

/// <summary>
/// ������� ������
/// </summary>
void BinarySearchTree::DeleteTree() {
    DeleteNode(0);
    for (int i = tree.size() - 1; i >= 0; --i)
        if (tree[i].data == INT_MAX)
            tree.pop_back();
    //tree.clear();
}

/// <summary>
/// ���������� ������
/// </summary>
/// <param name="minValue">����������� ������� ��������</param>
/// <param name="maxValue">������������ ������� ��������</param>
/// <param name="quantity">���������� ����������� ���������</param>
void BinarySearchTree::FillingInTheTree(int minValue, int maxValue, int quantity) {
    cout << "���������� ������ ����������: " << endl;
    for (int i = 0; i < quantity; ++i) {
        int addingValue = rand() % maxValue + minValue;
        Insert(addingValue);
        cout << addingValue << " ";
    }
    cout << endl;
}
