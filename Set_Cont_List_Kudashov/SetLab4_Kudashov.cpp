//
// Created by sasha on 25.02.2022.
//

#include "SetLab4_Kudashov.h"
// Проверка на пустое множество
bool SetListContainer::emptySet() {
    return set.empty();
}
// Проверка принадлежности элемента множеству
bool SetListContainer::checkingOfExistence(int checking_value) {
    if (this->emptySet()) return false;
    for (int iter : set)
        if (iter == checking_value)
            return true;
    return false;
}
// Добавление нового элемента в множество в начало списка
void SetListContainer::add(int adding_value) {
    if (!checkingOfExistence(adding_value))
        set.push_front(adding_value);
}
// Мощность множества
int SetListContainer::powerOfTheSet() {
    return set.size();
}
// Создание нового множества
SetListContainer SetListContainer::creatingSet(int quantity, int min, int max, int k) {
    SetListContainer set = *new SetListContainer();
    // k - коэффициент кратности
    // Множество А – множество чисел, кратных 5. Множество В – множество чисел, кратных 10.
    if (k*quantity <= max - min + 1){
        while (set.powerOfTheSet() < quantity){
            int temp = rand() % (max-min+1) + min;
            if (temp % k == 0)
                set.add(temp);
        }
    }
    else
        cout << "It is impossible to create a set according to the specified conditions!" << endl;
    return set;
}
// Вывод элементов множества
string SetListContainer::printSet(const string &separator) {
    if (this->emptySet()) return "It is impossible to output an empty set!";
    string print;
    for (auto iter = set.begin(); iter != set.end(); iter++)
        print += to_string(*iter) + separator;
    print.pop_back();
    print.pop_back();
    return print;
}
// Удаление множества
void SetListContainer::deleteSet() {
    set.clear();
}
// Является ли A подмножеством B
bool SetListContainer::isSubset(SetListContainer a, SetListContainer b) {
    if (a.emptySet()) return true;
    if (a.powerOfTheSet() > b.powerOfTheSet()) return false;
    for (int iter: a.set)
        if (!b.checkingOfExistence(iter))
            return false;
    return true;
}
// Проверка множеств на равенство
bool SetListContainer::isEqual(SetListContainer a, SetListContainer b) {
    return isSubset(a,b) && (a.powerOfTheSet() == b.powerOfTheSet());
}
// Объединение множеств
SetListContainer SetListContainer::combiningSets(SetListContainer a, SetListContainer b) {
    if (a.emptySet() || b.emptySet())
        return *new SetListContainer();
    SetListContainer c = a;
    for (int iter: b.set)
        if(!c.checkingOfExistence(iter))
            c.add(iter);
    return c;
}
// Пересечение множеств
SetListContainer SetListContainer::intersectionOfSets(SetListContainer a, SetListContainer b) {
    if (a.emptySet() || b.emptySet())
        return *new SetListContainer();
    SetListContainer c = *new SetListContainer();
    for (int iter: a.set)
        if(b.checkingOfExistence(iter))
            c.add(iter);
    return c;
}
// Разность множеств
SetListContainer SetListContainer::differenceOfSets(const SetListContainer &a, SetListContainer b) {
    SetListContainer c = *new SetListContainer();
    for (int iter: a.set)
        if(!b.checkingOfExistence(iter))
            c.add(iter);
    return c;
}
// Симметричная разность множеств
SetListContainer SetListContainer::symmetricDifferenceOfSets(const SetListContainer &a, const SetListContainer &b) {
    if (intersectionOfSets(a,b).emptySet()) return combiningSets(a,b);
    return differenceOfSets(combiningSets(a,b), intersectionOfSets(a,b));
}
/*
// Проверка множеств на равенство
bool SetListContainer::isEqual(SetListContainer a, SetListContainer b) {
    return a.set == b.set;
}
// Объединение множеств
SetListContainer SetListContainer::combiningSets(SetListContainer a, SetListContainer b) {
    if (a.emptySet() || b.emptySet())
        return *new SetListContainer();
    a.set.sort();
    b.set.sort();
    a.set.merge(b.set);
    a.set.unique();
    return a;
}
// Пересечение множеств
SetListContainer SetListContainer::intersectionOfSets(SetListContainer a, SetListContainer b) {
    if (a.emptySet() || b.emptySet())
        return *new SetListContainer();
    a.set.sort();
    b.set.sort();
    SetListContainer c = *new SetListContainer();
    set_intersection(a.set.begin(), a.set.end(), b.set.begin(), b.set.end(), inserter(c.set,c.set.begin()));
    return c;
}
// Разность множеств
SetListContainer SetListContainer::differenceOfSets(SetListContainer a, SetListContainer b) {
    SetListContainer c = *new SetListContainer();
    a.set.sort();
    b.set.sort();
    set_difference(a.set.begin(), a.set.end(), b.set.begin(), b.set.end(), inserter(c.set,c.set.begin()));
    return c;
}
// Симметричная разность множеств
SetListContainer SetListContainer::symmetricDifferenceOfSets(SetListContainer a, SetListContainer b) {
    SetListContainer c = *new SetListContainer();
    a.set.sort();
    b.set.sort();
    set_symmetric_difference(a.set.begin(), a.set.end(), b.set.begin(), b.set.end(), inserter(c.set,c.set.begin()));
    return c;
}*/