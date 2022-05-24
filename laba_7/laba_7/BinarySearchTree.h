#pragma 
#include <iostream>
#include <vector>
using namespace std;
class BinarySearchTree
{
    /// <summary>
    /// ������� ������
    /// </summary>
    struct node
    {
        /// <summary>
        /// �������� � �������
        /// </summary>
        int data;
        /// <summary>
        /// ������ ������ ����������
        /// </summary>
        int left;
        /// <summary>
        /// ������ ������� ����������
        /// </summary>
        int right;
    };
    /// <summary>
    /// ������, �������� ��� ������� ������
    /// </summary>
public: vector <node> tree;
      /// <summary>
      /// ����������� �� ���������
      /// </summary>
      BinarySearchTree();

      /// <summary>
      /// ����������� � ����������
      /// </summary>
      /// <param name="data">�������� �����</param>
      BinarySearchTree(int data);

      /// <summary>
      /// ���������� ������ ����������
      /// </summary>
      /// <param name="currIndex">������ ������� �������</param>
      /// <param name="data">�������� ������������ ��������</param>
      void SetLeft(int currIndex, int data);

      /// <summary>
      /// ���������� ������� ����������
      /// </summary>
      /// <param name="currIndex">������ ������� �������</param>
      /// <param name="data">�������� ������������ ��������</param>
      void SetRight(int currIndex, int data);

      /// <summary>
      /// �������� �� �������
      /// </summary>
      /// <returns>������ ��������� ��� ���</returns>
      bool IsEmpty();

      /// <summary>
      /// ������� ��������
      /// </summary>
      /// <param name="data">��������</param>
      void Insert(int data);

      /// <summary>
      /// ����� ����� ������� / ������������ / ���������
      /// </summary>
      /// <param name="index">������ ������� �������</param>
      void CenterTraversal(int index);

      /// <summary>
      /// ����� ������ ���� / � ������� / ����������
      /// </summary>
      /// <param name="index">������ ������� �������</param>
      void PreTraversal(int index);

      /// <summary>
      /// ����� ����� ����� / � �������� ������� / �����������
      /// </summary>
      /// <param name="index">������ ������� �������</param>
      void PostTraversal(int index);

      /// <summary>
      /// ������� �������� ���������
      /// </summary>
      /// <param name="index">������ ������� �������</param>
      void DeleteNode(int index);

      /// <summary>
      /// ������� ������
      /// </summary>
      void DeleteTree();

      /// <summary>
      /// ���������� ������
      /// </summary>
      /// <param name="minValue">����������� ������� ��������</param>
      /// <param name="maxValue">������������ ������� ��������</param>
      /// <param name="quantity">���������� ����������� ���������</param>
      void FillingInTheTree(int minValue, int maxValue, int quantity);
};

