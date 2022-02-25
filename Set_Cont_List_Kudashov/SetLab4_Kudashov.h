#ifndef SET_CONT_LIST_KUDASHOV_SETLAB4_KUDASHOV_H
#define SET_CONT_LIST_KUDASHOV_SETLAB4_KUDASHOV_H
#include <iostream>
#include <list>
using namespace std;

class SetListContainer {
private:
    list <int> set;
public:
    // Проверка на пустое множество
    bool emptySet();
    // Проверка принадлежности элемента множеству
    bool checkingOfExistence(int checking_value);
    // Добавление нового элемента в множество в начало списка
    void add(int adding_value);
    // Мощность множества
    int powerOfTheSet();
    // Создание нового множества
    static SetListContainer creatingSet(int quantity, int min, int max, int k);
    // Вывод элементов множества
    string printSet(const string& separator);
    // Удаление множества
    void deleteSet();
    // Является ли A подмножеством B
    static bool isSubset(SetListContainer a, SetListContainer b);
    // Проверка множеств на равенство
    static bool isEqual(SetListContainer a, SetListContainer b);
    // Объединение множеств
    static SetListContainer combiningSets(SetListContainer a, SetListContainer b);
    // Пересечение множеств
    static SetListContainer intersectionOfSets(SetListContainer a, SetListContainer b);
    // Разность множеств
    static SetListContainer differenceOfSets(const SetListContainer& a, SetListContainer b);
    // Симметричная разность множеств
    static SetListContainer symmetricDifferenceOfSets(const SetListContainer& a, const SetListContainer& b);
};
#endif //SET_CONT_LIST_KUDASHOV_SETLAB4_KUDASHOV_H