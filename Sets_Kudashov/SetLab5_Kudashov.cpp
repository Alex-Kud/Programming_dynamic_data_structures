#include "SetLab5_Kudashov.h"
// Проверка на пустое множество
bool SetSetContainer::emptySet() {
    return set.empty();
}
// Проверка принадлежности элемента множеству
bool SetSetContainer::checkingOfExistence(int checking_value) {
    return set.find(checking_value) != set.end();
}
// Добавление нового элемента в множество в начало списка
void SetSetContainer::add(int adding_value) {
    if (!checkingOfExistence(adding_value))
        set.insert(set.begin(), adding_value);
}
// Мощность множества
int SetSetContainer::powerOfTheSet() {
    return set.size();
}
// Создание нового множества
SetSetContainer SetSetContainer::creatingSet(int quantity, int min, int max, int k) {
    SetSetContainer set = *new SetSetContainer();
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
string SetSetContainer::printSet(const string &separator) {
    if (this->emptySet()) return "It is impossible to output an empty set!";
    string print;
    for (auto iter = set.begin(); iter != set.end(); iter++)
        print += to_string(*iter) + separator;
    print.pop_back();
    print.pop_back();
    return print;
}
// Удаление множества
void SetSetContainer::deleteSet() {
    set.clear();
}
// Является ли A подмножеством B
bool SetSetContainer::isSubset(SetSetContainer a, SetSetContainer b) {
    return includes(a.set.begin(), a.set.end(), b.set.begin(), b.set.end());
}
// Проверка множеств на равенство
bool SetSetContainer::isEqual(SetSetContainer a, SetSetContainer b) {
    return a.set == b.set;
}

// Объединение множеств
SetSetContainer SetSetContainer::combiningSets(SetSetContainer a, SetSetContainer b) {
    if (a.emptySet() || b.emptySet())
        return *new SetSetContainer();
    SetSetContainer c = a;
    for (int iter: b.set)
        if(!c.checkingOfExistence(iter))
            c.add(iter);
    return c;
}
// Пересечение множеств
SetSetContainer SetSetContainer::intersectionOfSets(SetSetContainer a, SetSetContainer b) {
    if (a.emptySet() || b.emptySet())
        return *new SetSetContainer();
    SetSetContainer c = *new SetSetContainer();
    for (int iter: a.set)
        if(b.checkingOfExistence(iter))
            c.add(iter);
    return c;
}
// Разность множеств
SetSetContainer SetSetContainer::differenceOfSets(SetSetContainer a, SetSetContainer b) {
    SetSetContainer c = *new SetSetContainer();
    for (int iter: a.set)
        if(!b.checkingOfExistence(iter))
            c.add(iter);
    return c;
}
// Симметричная разность множеств
SetSetContainer SetSetContainer::symmetricDifferenceOfSets(SetSetContainer a, SetSetContainer b) {
    if (intersectionOfSets(a,b).emptySet()) return combiningSets(a,b);
    return differenceOfSets(combiningSets(a,b), intersectionOfSets(a,b));
}
/*
// Объединение множеств
SetSetContainer SetSetContainer::combiningSets(SetSetContainer a, SetSetContainer b) {
    if (a.emptySet() || b.emptySet())
        return *new SetSetContainer();
    SetSetContainer c = *new SetSetContainer();
    merge(a.set.begin(), a.set.end(), b.set.begin(), b.set.end(), inserter(c.set,c.set.begin()));
    return c;
}
// Пересечение множеств
SetSetContainer SetSetContainer::intersectionOfSets(SetSetContainer a, SetSetContainer b) {
    if (a.emptySet() || b.emptySet())
        return *new SetSetContainer();
    SetSetContainer c = *new SetSetContainer();
    set_intersection(a.set.begin(), a.set.end(), b.set.begin(), b.set.end(), inserter(c.set,c.set.begin()));
    return c;
}
// Разность множеств
SetSetContainer SetSetContainer::differenceOfSets(const SetSetContainer &a, SetSetContainer b) {
    SetSetContainer c = *new SetSetContainer();
    set_difference(a.set.begin(), a.set.end(), b.set.begin(), b.set.end(), inserter(c.set,c.set.begin()));
    return c;
}
// Симметричная разность множеств
SetSetContainer SetSetContainer::symmetricDifferenceOfSets(const SetSetContainer &a, const SetSetContainer &b) {
    SetSetContainer c = *new SetSetContainer();
    set_symmetric_difference(a.set.begin(), a.set.end(), b.set.begin(), b.set.end(), inserter(c.set,c.set.begin()));
    return c;
}*/