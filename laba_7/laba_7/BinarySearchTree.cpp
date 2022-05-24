#include "BinarySearchTree.h"

/// <summary>
/// Конструктор по умолчанию
/// </summary>
BinarySearchTree::BinarySearchTree() {}

/// <summary>
/// Конструктор с параметром
/// </summary>
/// <param name="data">Значение корня</param>
BinarySearchTree::BinarySearchTree(int data)
{
    tree.push_back({ data, -1, -1 });
}

/// <summary>
/// Добавление левого наследника
/// </summary>
/// <param name="currIndex">Индекс текущей вершины</param>
/// <param name="data">Значение добавляемого элемента</param>
void BinarySearchTree::SetLeft(int currIndex, int data)
{
    tree[currIndex].left = tree.size();
    tree.push_back({ data, -1, -1 });
}

/// <summary>
/// Добавление правого наследника
/// </summary>
/// <param name="currIndex">Индекс текущей вершины</param>
/// <param name="data">Значение добавляемого элемента</param>
void BinarySearchTree::SetRight(int currIndex, int data)
{
    tree[currIndex].right = tree.size();
    tree.push_back({ data, -1, -1 });
}

/// <summary>
/// Проверка на пустоту
/// </summary>
/// <returns>Пустое множество или нет</returns>
bool BinarySearchTree::IsEmpty() {
    return tree.size() == 0;
}

/// <summary>
/// Вставка значения
/// </summary>
/// <param name="data">Значение</param>
void BinarySearchTree::Insert(int data)
{
    // Возвращаем новый узел, если дерево пустое
    if (IsEmpty())
    {
        tree.push_back({ data, -1, -1 });
        return;
    }

    int currentIndex = 0; // Текущая вершина
    while (currentIndex < tree.size())
    {
        if (tree[currentIndex].data == data) // Добавляемое значение равно значению в текущей вершине
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
/// Обход слева направо / Симметричный / Инфиксный
/// </summary>
/// <param name="index">Индекс текущей вершины</param>
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
/// Обход сверху вниз / В глубину / Префиксный
/// </summary>
/// <param name="index">Индекс текущей вершины</param>
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
/// Обход снизу вверх / В обратном порядке / Постфиксный
/// </summary>
/// <param name="index">Индекс текущей вершины</param>
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
/// Функция удаления поддерева
/// </summary>
/// <param name="index">Индекс текущей вершины</param>
void BinarySearchTree::DeleteNode(int index) {
    if (!IsEmpty()) {
        if (tree[index].left != -1) DeleteNode(tree[index].left);
        if (tree[index].right != -1) DeleteNode(tree[index].right);
        tree[index].data = INT_MAX;
    }
}

/// <summary>
/// Очистка дерева
/// </summary>
void BinarySearchTree::DeleteTree() {
    DeleteNode(0);
    for (int i = tree.size() - 1; i >= 0; --i)
        if (tree[i].data == INT_MAX)
            tree.pop_back();
    //tree.clear();
}

/// <summary>
/// Заполнение дерева
/// </summary>
/// <param name="minValue">Минимальная граница значений</param>
/// <param name="maxValue">Максимальная граница значений</param>
/// <param name="quantity">Количество добавляемых элементов</param>
void BinarySearchTree::FillingInTheTree(int minValue, int maxValue, int quantity) {
    cout << "Заполнение дерева элементами: " << endl;
    for (int i = 0; i < quantity; ++i) {
        int addingValue = rand() % maxValue + minValue;
        Insert(addingValue);
        cout << addingValue << " ";
    }
    cout << endl;
}
