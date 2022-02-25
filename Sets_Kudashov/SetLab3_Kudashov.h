#ifndef OOP_SET_KUDASHOV_SETLAB3_KUDASHOV_H
#define OOP_SET_KUDASHOV_SETLAB3_KUDASHOV_H
#pragma once
#include <iostream>
#include <string>
using namespace std;
// Элемент списка
struct NodeOOP {
    int value; // Данные - числовое значение
    NodeOOP* next; // Указатель на следующий элемент списка
};
class SetOOP {
private:
    NodeOOP* first;
public:
    // Получение указателя на верщину
    NodeOOP* getFirst();
    // Создание пустого множества
    SetOOP();
    // Создание пустого множества
    static SetOOP creatingAnEmptySet();
    // Проверка на пустое множество
    bool emptySet();
    // Проверка принадлежности элемента множеству
    bool checkingOfExistence(int checking_value);
    // Добавление нового элемента в множество в начало списка
    void add(int adding_value);
    // Мощность множества
    int powerOfTheSet ();
    // Создание нового множества
    static SetOOP creatingSet(int quantity, int min, int max, int k);
    // Вывод элементов множества
    string printSet(const string& separator);
    // Удаление множества
    void deleteSet();
    // Является ли A подмножеством B
    static bool isSubset(SetOOP a, SetOOP b);
    // Проверка множеств на равенство
    static bool isEqual(SetOOP a, SetOOP b);
    // Объединение множеств
    static SetOOP combiningSets(SetOOP a, SetOOP b);
    // Пересечение множеств
    static SetOOP intersectionOfSets(SetOOP a, SetOOP b);
    // Разность множеств
    static SetOOP differenceOfSets(SetOOP a, SetOOP b);
    // Симметричная разность множеств
    static SetOOP symmetricDifferenceOfSets(SetOOP a, SetOOP b);
};

#endif
