#include "SetLab1_12_Kudashov.h"

// Создание пустого множества
Node* creatingAnEmptySet() {
    Node* first = nullptr;
    return first;
}
// Проверка на пустое множество
bool emptySet(Node* first) {
    return first == nullptr;
}
// Проверка принадлежности элемента множеству
bool checkingOfExistence(Node* first, int checking_value) {
    if (emptySet(first)) return false;
    Node* current = first;
    while (current->next && current->value != checking_value)
        current = current->next;
    return current->value == checking_value;
};
// Добавление нового элемента в множество в начало списка
Node* add(Node*& first, int adding_value) {
    if (!checkingOfExistence(first, adding_value)){
        Node* new_node = new Node;
        new_node->value = adding_value;
        new_node->next = first;
        first = new_node;
    }
    return first;
}
// Мощность множества
int powerOfTheSet (Node* first) {
    int power = 0;
    if (emptySet(first)) return 0;
    Node* current = first;
    power++;
    while (current->next) {
        current = current->next;
        power++;
    }
    return power;
}
// Создание нового множества
Node* creatingSet(int quantity, int min, int max, int k){
    Node* set = creatingAnEmptySet();
    // k - коэффициент кратности
    // Множество А – множество чисел, кратных 5. Множество В – множество чисел, кратных 10.
    if (k*quantity <= max - min + 1){
        while (powerOfTheSet(set) < quantity){
            int temp = rand() % (max-min+1) + min;
            if (temp % k == 0)
                add(set, temp);
        }
    }
    else
        cout << "Creating a set is not possible!" << endl;
    return set;
}
// Вывод элементов множества
string printSet(Node* first, string separator){
    if (emptySet(first)) return "Elements not found";
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
Node* deleteSet(Node*& first){
    Node* current = first;
    if (emptySet(first))                // Если список пуст, сообщить об этом
        cout << "The list is empty!" << endl;
    while (current) {                   // Удаление элементов, если они есть
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    first = nullptr;
    return first;
}
// Является ли A подмножеством B
bool isSubset(Node* A, Node* B){
    if (emptySet(A)) return true;
    if (powerOfTheSet(A) > powerOfTheSet(B)) return false;
    Node* current = A;
    while (current->next){
        if(!checkingOfExistence(B, current->value))
            return false;
        current = current->next;
    }
    return true;
}
// Проверка множеств на равенство
bool isEqual(Node* A, Node* B){
    return isSubset(A,B) && (powerOfTheSet(A) == powerOfTheSet(B));
}
// Объединение множеств
Node* combiningSets(Node* A, Node* B){
    if (emptySet(A) || emptySet(B))
        return creatingAnEmptySet();;
    Node* C = A;
    Node* current = B;
    while (current->next) {
        if(!checkingOfExistence(C, current->value))
            C = add(C, current->value);
        current = current->next;
    }
    if(checkingOfExistence(B, current->value))
        C = add(C, current->value);
    return C;
}
// Пересечение множеств
Node* intersectionOfSets(Node* A, Node* B){
    if (emptySet(A) || emptySet(B))
        return creatingAnEmptySet();;
    Node* C = creatingAnEmptySet();
    Node* current = A;
    while (current->next){
        if(checkingOfExistence(B, current->value))
            C = add(C, current->value);
        current = current->next;
    }
    if(checkingOfExistence(B, current->value))
        C = add(C, current->value);
    return C;
}
// Разность множеств
Node* differenceOfSets(Node* A, Node* B){
    if (emptySet(A) || emptySet(B))
        return creatingAnEmptySet();
    Node* C = creatingAnEmptySet();
    Node* current = A;
    while (current->next){
        if(!checkingOfExistence(B, current->value))
            C = add(C, current->value);
        current = current->next;
    }
    if(!checkingOfExistence(B, current->value))
        C = add(C, current->value);
    return C;
}
// Симметричная разность множеств
Node* symmetricDifferenceOfSets(Node* A, Node* B){
    return differenceOfSets(combiningSets(A,B), intersectionOfSets(A,B));
}