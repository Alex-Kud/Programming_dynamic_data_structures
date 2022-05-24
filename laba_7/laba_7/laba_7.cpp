#include "BinarySearchTree.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    BinarySearchTree tree = BinarySearchTree();
    tree.FillingInTheTree(1, 100, 50);
    cout << "Обход слева направо" << endl;
    tree.CenterTraversal(0);
    cout << endl << "Обход сверху вниз" << endl;
    tree.PreTraversal(0);
    cout << endl << "Обход снизу вверх" << endl;
    tree.PostTraversal(0);
    cout << endl << "Дерево пустое: " << tree.IsEmpty();
    tree.DeleteTree();
    cout << endl << "Удаление дерева..." ;
    cout << endl << "Дерево пустое: " << tree.IsEmpty() << endl;
}