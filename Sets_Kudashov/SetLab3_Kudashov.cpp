#include "SetLab3_Kudashov.h"
// Получение указателя на вершину
NodeOOP* SetOOP::getFirst() {
    return first;
}
// Создание пустого множества
SetOOP::SetOOP() {
    first = nullptr;
}
// Создание пустого множества
SetOOP SetOOP::creatingAnEmptySet() {
    return *new SetOOP;
}
// Проверка на пустое множество
bool SetOOP::emptySet() {
    return first == nullptr;
}
// Проверка принадлежности элемента множеству
bool SetOOP::checkingOfExistence(int checking_value) {
    if (this->emptySet()) return false;
    NodeOOP* current = first;
    while (current->next && current->value != checking_value)
        current = current->next;
    return current->value == checking_value;
}
// Добавление нового элемента в множество в начало списка
void SetOOP::add(int adding_value) {
    if (!checkingOfExistence(adding_value)){
        NodeOOP* new_node = new NodeOOP;
        new_node->value = adding_value;
        new_node->next = first;
        first = new_node;
    }
}
// Мощность множества
int SetOOP::powerOfTheSet() {
    int power = 0;
    if (this->emptySet()) return 0;
    NodeOOP* current = first;
    power++;
    while (current->next) {
        current = current->next;
        power++;
    }
    return power;
}
// Создание нового множества
SetOOP SetOOP::creatingSet(int quantity, int min, int max, int k) {
    SetOOP set = *new SetOOP();
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
string SetOOP::printSet(const string& separator) {
    if (this->emptySet()) return "It is impossible to output an empty set!";
    NodeOOP* current = first;
    string print;
    while (current->next) {
        print += to_string(current->value) + separator;
        current = current->next;
    }
    print += to_string(current->value);
    return print;
}
// Удаление множества
void SetOOP::deleteSet() {
    NodeOOP* current = first;
    if (this->emptySet())                   // Если список пуст, сообщить об этом
        cout << "The set is already empty!" << endl;
    while (current) {                       // Удаление элементов, если они есть
        NodeOOP* temp = current;
        current = current->next;
        delete temp;
    }
    first = nullptr;
}
// Является ли A подмножеством B
bool SetOOP::isSubset(SetOOP a, SetOOP b) {
    if (a.emptySet()) return true;
    if (a.powerOfTheSet() > b.powerOfTheSet()) return false;
    NodeOOP* current = a.getFirst();
    while (current->next){
        if(!b.checkingOfExistence(current->value))
            return false;
        current = current->next;
    }
    return true;
}
// Проверка множеств на равенство
bool SetOOP::isEqual(SetOOP a, SetOOP b) {
    return isSubset(a,b) && (a.powerOfTheSet() == b.powerOfTheSet());
}
// Объединение множеств
SetOOP SetOOP::combiningSets(SetOOP a, SetOOP b) {
    if (a.emptySet() || b.emptySet())
        return *new SetOOP();
    SetOOP c = a;
    NodeOOP* current = b.getFirst();
    while (current->next) {
        if(!c.checkingOfExistence(current->value))
            c.add(current->value);
        current = current->next;
    }
    if(b.checkingOfExistence(current->value))
        c.add(current->value);
    return c;
}
// Пересечение множеств
SetOOP SetOOP::intersectionOfSets(SetOOP a, SetOOP b) {
    if (a.emptySet() || b.emptySet())
        return *new SetOOP();
    SetOOP c = *new SetOOP();
    NodeOOP* current = a.getFirst();
    while (current->next){
        if(b.checkingOfExistence(current->value))
            c.add(current->value);
        current = current->next;
    }
    if(b.checkingOfExistence(current->value))
        c.add(current->value);
    return c;
}
// Разность множеств
SetOOP SetOOP::differenceOfSets(SetOOP a, SetOOP b) {
    if (a.emptySet() || b.emptySet())
        return *new SetOOP();
    SetOOP c = *new SetOOP();
    NodeOOP* current = a.getFirst();
    while (current->next){
        if(!b.checkingOfExistence(current->value))
            c.add(current->value);
        current = current->next;
    }
    if(!b.checkingOfExistence(current->value))
        c.add(current->value);
    return c;
}
// Симметричная разность множеств
SetOOP SetOOP::symmetricDifferenceOfSets(SetOOP a, SetOOP b) {
    if (intersectionOfSets(a,b).emptySet()) return combiningSets(a,b);
    return differenceOfSets(combiningSets(a,b), intersectionOfSets(a,b));
}
