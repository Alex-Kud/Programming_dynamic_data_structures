#ifndef LABA_1_SETLAB1_12_KUDASHOV_H
#define LABA_1_SETLAB1_12_KUDASHOV_H
#pragma once
#include <iostream>
#include <string>
using namespace std;
// Элемент списка
struct Node {
    int value; // Данные - числовое значение
    Node* next; // Указатель на следующий элемент списка
};
// Создание пустого множества
Node* creatingAnEmptySet();
// Проверка на пустое множество
bool emptySet(Node* first);
// Проверка принадлежности элемента множеству
bool checkingOfExistence(Node* first, int checking_value);
// Добавление нового элемента в множество в начало списка
Node* add(Node*& first, int adding_value);
// Мощность множества
int powerOfTheSet (Node* first);
// Создание нового множества
Node* creatingSet(int quantity, int min, int max, int k);
// Вывод элементов множества
string printSet(Node* first, string separator);
// Удаление множества
Node* deleteSet(Node*& first);
#endif //LABA_1_SETLAB1_12_KUDASHOV_H