#include "SetLab1_12_Kudashov.h"
#include <clocale> //Обязательно для функции setlocale()
int main() {
    srand( time(nullptr) );
    setlocale(LC_ALL, "Russian");
    cout << "=================ДЕМО ЛАБЫ 1=================" << endl;
    Node* setA = creatingSet (rand() % 4 + 6, 5, 500, 5);
    cout << "Вывод множества A: " << endl << printSet(setA, " | ") << endl;
    cout << "Мощность множества A: " << endl << powerOfTheSet(setA) << endl;
    Node* setB = creatingSet (rand() % 4 + 6, 5, 500, 10);
    cout << "Вывод множества B: " << endl << printSet(setB, " | ") << endl;
    cout << "Мощность множества B: " << endl << powerOfTheSet(setB) << endl;
    cout << "----------------После очистки----------------" << endl;
    deleteSet(setA);
    cout << "Вывод множества A: " << endl << printSet(setA, " | ") << endl;
    cout << "Мощность множества A: " << endl << powerOfTheSet(setA) << endl;
    deleteSet(setB);
    cout << "Вывод множества B: " << endl << printSet(setB, " | ") << endl;
    cout << "Мощность множества B: " << endl << powerOfTheSet(setB) << endl;
    cout << endl << "=================ДЕМО ЛАБЫ 2=================" << endl;
    Node* A =  creatingSet (rand() % 4 + 6, 5, 200, 10);
    Node* B =  creatingSet (rand() % 4 + 6, 5, 200, 5);
    cout << "Вывод множества A: " << endl << printSet(A, " | ") << endl;
    cout << "Вывод множества B: " << endl << printSet(B, " | ") << endl;
    cout << "Является ли A подмножеством B: " << isSubset(A,B) << endl;
    cout << "Равны ли множества A и B: " << isEqual(A,B) << endl;
    Node* C = combiningSets(A,B);
    cout << "Вывод объединения множеств: " << endl << printSet(C, " | ") << endl;
    Node* D = intersectionOfSets(A,B);
    cout << "Вывод пересечения множеств: " << endl << printSet(D, " | ") << endl;
    Node* E = differenceOfSets(A,B);
    cout << "Вывод разности множеств A и B: " << endl << printSet(E, " | ") << endl;
    Node* F = differenceOfSets(B,A);
    cout << "Вывод разности множеств B и A: " << endl << printSet(F, " | ") << endl;
    Node* G = symmetricDifferenceOfSets(A,B);
    cout << "Вывод симметричной разности множеств: " << endl << printSet(G, " | ") << endl;
    return 0;
}