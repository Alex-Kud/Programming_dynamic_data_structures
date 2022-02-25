#ifndef SET_CONT_SET_KUDASHOV_SETLAB5_KUDASHOV_H
#define SET_CONT_SET_KUDASHOV_SETLAB5_KUDASHOV_H
#include <iostream>
#include <set>
using namespace std;

class SetSetContainer {
private:
    set <int> set;
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
    static SetSetContainer creatingSet(int quantity, int min, int max, int k);
    // Вывод элементов множества
    string printSet(const string& separator);
    // Удаление множества
    void deleteSet();
    // Является ли A подмножеством B
    static bool isSubset(SetSetContainer a, SetSetContainer b);
    // Проверка множеств на равенство
    static bool isEqual(SetSetContainer a, SetSetContainer b);
    // Объединение множеств
    static SetSetContainer combiningSets(SetSetContainer a, SetSetContainer b);
    // Пересечение множеств
    static SetSetContainer intersectionOfSets(SetSetContainer a, SetSetContainer b);
    // Разность множеств
    static SetSetContainer differenceOfSets(SetSetContainer a, SetSetContainer b);
    // Симметричная разность множеств
    static SetSetContainer symmetricDifferenceOfSets(SetSetContainer a, SetSetContainer b);
    /*
    // Объединение множеств
    static SetSetContainer combiningSets(SetSetContainer a, SetSetContainer b);
    // Пересечение множеств
    static SetSetContainer intersectionOfSets(SetSetContainer a, SetSetContainer b);
    // Разность множеств
    static SetSetContainer differenceOfSets(const SetSetContainer& a, SetSetContainer b);
    // Симметричная разность множеств
    static SetSetContainer symmetricDifferenceOfSets(const SetSetContainer& a, const SetSetContainer& b);
    */


};
#endif //SET_CONT_SET_KUDASHOV_SETLAB5_KUDASHOV_H
