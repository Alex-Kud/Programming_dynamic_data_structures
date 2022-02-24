#include "SetLab3_Kudashov.h"
// Получение указателя на верщину
Node *List::getFirst() {
    return first;
}
// Создание пустого множества
List::List() {
    first = nullptr;
}
// Создание пустого множества
List List::creatingAnEmptySet() {
    return *new List;
}
// Проверка на пустое множество
bool List::emptySet() {
    return first == nullptr;
}
// Проверка принадлежности элемента множеству
bool List::checkingOfExistence(int checking_value) {
    if (this->emptySet()) return false;
    Node* current = first;
    while (current->next && current->value != checking_value)
        current = current->next;
    return current->value == checking_value;
}
// Добавление нового элемента в множество в начало списка
void List::add(int adding_value) {
    if (!checkingOfExistence(adding_value)){
        Node* new_node = new Node;
        new_node->value = adding_value;
        new_node->next = first;
        first = new_node;
    }
}
// Мощность множества
int List::powerOfTheSet() {
    int power = 0;
    if (this->emptySet()) return 0;
    Node* current = first;
    power++;
    while (current->next) {
        current = current->next;
        power++;
    }
    return power;
}
// Создание нового множества
List List::creatingSet(int quantity, int min, int max, int k) {
    List set = *new List();
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
string List::printSet(const string& separator) {
    if (this->emptySet()) return "It is impossible to output an empty set!";
    Node* current = first;
    string print;
    while (current->next) {
        print += to_string(current->value) + separator;
        current = current->next;
    }
    print += to_string(current->value);
    return print;
}
// Удаление множества
void List::deleteSet() {
    Node* current = first;
    if (this->emptySet())                   // Если список пуст, сообщить об этом
        cout << "The set is already empty!" << endl;
    while (current) {                       // Удаление элементов, если они есть
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    first = nullptr;
}
// Является ли A подмножеством B
bool List::isSubset(List a, List b) {
    if (a.emptySet()) return true;
    if (a.powerOfTheSet() > b.powerOfTheSet()) return false;
    Node* current = a.getFirst();
    while (current->next){
        if(!b.checkingOfExistence(current->value))
            return false;
        current = current->next;
    }
    return true;
}
// Проверка множеств на равенство
bool List::isEqual(List a, List b) {
    return isSubset(a,b) && (a.powerOfTheSet() == b.powerOfTheSet());
}
// Объединение множеств
List List::combiningSets(List a, List b) {
    if (a.emptySet() || b.emptySet())
        return *new List();
    List c = a;
    Node* current = b.getFirst();
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
List List::intersectionOfSets(List a, List b) {
    if (a.emptySet() || b.emptySet())
        return *new List();
    List c = *new List();
    Node* current = a.getFirst();
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
List List::differenceOfSets(List a, List b) {
    if (a.emptySet() || b.emptySet())
        return *new List();
    List c = *new List();
    Node* current = a.getFirst();
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
List List::symmetricDifferenceOfSets(List a, List b) {
    if (intersectionOfSets(a,b).emptySet()) return combiningSets(a,b);
    return differenceOfSets(combiningSets(a,b), intersectionOfSets(a,b));
}
