#pragma 
#include <iostream>
#include <vector>
using namespace std;
class BinarySearchTree
{
    /// <summary>
    /// Вершина дерева
    /// </summary>
    struct node
    {
        /// <summary>
        /// Значение в вершине
        /// </summary>
        int data;
        /// <summary>
        /// Индекс левого наследника
        /// </summary>
        int left;
        /// <summary>
        /// Индекс правого наследника
        /// </summary>
        int right;
    };
    /// <summary>
    /// Вектор, хранящий все вершины дерева
    /// </summary>
public: vector <node> tree;
      /// <summary>
      /// Конструктор по умолчанию
      /// </summary>
      BinarySearchTree();

      /// <summary>
      /// Конструктор с параметром
      /// </summary>
      /// <param name="data">Значение корня</param>
      BinarySearchTree(int data);

      /// <summary>
      /// Добавление левого наследника
      /// </summary>
      /// <param name="currIndex">Индекс текущей вершины</param>
      /// <param name="data">Значение добавляемого элемента</param>
      void SetLeft(int currIndex, int data);

      /// <summary>
      /// Добавление правого наследника
      /// </summary>
      /// <param name="currIndex">Индекс текущей вершины</param>
      /// <param name="data">Значение добавляемого элемента</param>
      void SetRight(int currIndex, int data);

      /// <summary>
      /// Проверка на пустоту
      /// </summary>
      /// <returns>Пустое множество или нет</returns>
      bool IsEmpty();

      /// <summary>
      /// Вставка значения
      /// </summary>
      /// <param name="data">Значение</param>
      void Insert(int data);

      /// <summary>
      /// Обход слева направо / Симметричный / Инфиксный
      /// </summary>
      /// <param name="index">Индекс текущей вершины</param>
      void CenterTraversal(int index);

      /// <summary>
      /// Обход сверху вниз / В глубину / Префиксный
      /// </summary>
      /// <param name="index">Индекс текущей вершины</param>
      void PreTraversal(int index);

      /// <summary>
      /// Обход снизу вверх / В обратном порядке / Постфиксный
      /// </summary>
      /// <param name="index">Индекс текущей вершины</param>
      void PostTraversal(int index);

      /// <summary>
      /// Функция удаления поддерева
      /// </summary>
      /// <param name="index">Индекс текущей вершины</param>
      void DeleteNode(int index);

      /// <summary>
      /// Очистка дерева
      /// </summary>
      void DeleteTree();

      /// <summary>
      /// Заполнение дерева
      /// </summary>
      /// <param name="minValue">Минимальная граница значений</param>
      /// <param name="maxValue">Максимальная граница значений</param>
      /// <param name="quantity">Количество добавляемых элементов</param>
      void FillingInTheTree(int minValue, int maxValue, int quantity);
};

