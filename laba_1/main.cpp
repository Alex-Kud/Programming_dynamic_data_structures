#include <iostream>
using namespace std;
// Элемент списка
struct Node {
    int value; // Данные - числовое значение
    Node* next; // Указатель на следующий элемент списка
};
// Создание пустого множества
Node* creatingAnEmptySet() {
    Node* first = nullptr;
    return first;
}
// Проверка на пустое множество
bool emptySet(Node* first) {
    return first == nullptr;
}
// Проверка принадлежности элемента множеству.
bool checkingOfExistence(Node* first, int checking_value) {
    if (emptySet(first)) return false;
    Node* current = first;
    while (current && current->value != checking_value)
        current = current->next;
    return current->value == checking_value;

};
int main() {
    std::cout << "Hello, World!" << std::endl;
    Node* set = creatingAnEmptySet();
    cout << set;
    cout << emptySet(set);
    return 0;
}
