#ifndef OOP_SET_KUDASHOV_SETLAB3_KUDASHOV_H
#define OOP_SET_KUDASHOV_SETLAB3_KUDASHOV_H
#pragma once
#include <iostream>
#include <string>
using namespace std;
// Элемент списка
struct Node {
    int value; // Данные - числовое значение
    Node* next; // Указатель на следующий элемент списка
};
class List {
private:
    Node* first;
public:
    // Получение указателя на верщину
    Node* getFirst();
    // Создание пустого множества
    List();
    // Создание пустого множества
    static List creatingAnEmptySet();
    // Проверка на пустое множество
    bool emptySet();
    // Проверка принадлежности элемента множеству
    bool checkingOfExistence(int checking_value);
    // Добавление нового элемента в множество в начало списка
    void add(int adding_value);
    // Мощность множества
    int powerOfTheSet ();
    // Создание нового множества
    static List creatingSet(int quantity, int min, int max, int k);
    // Вывод элементов множества
    string printSet(const string& separator);
    // Удаление множества
    void deleteSet();
    // Является ли A подмножеством B
    static bool isSubset(List a, List b);
    // Проверка множеств на равенство
    static bool isEqual(List a, List b);
    // Объединение множеств
    static List combiningSets(List a, List b);
    // Пересечение множеств
    static List intersectionOfSets(List a, List b);
    // Разность множеств
    static List differenceOfSets(List a, List b);
    // Симметричная разность множеств
    static List symmetricDifferenceOfSets(List a, List b);
};

#endif
