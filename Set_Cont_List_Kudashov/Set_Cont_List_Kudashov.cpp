#include "SetLab4_Kudashov.h"

int main() {
    srand( time(nullptr));
    setlocale(LC_ALL, "Russian");
    cout << "=================ДЕМО ЛАБЫ 4=================" << endl;
    SetListContainer setA = SetListContainer::creatingSet (rand() % 4 + 6, 5, 500, 5);
    cout << "Вывод множества A: " << endl << setA.printSet(" | ") << endl;
    cout << "Мощность множества A: " << endl << setA.powerOfTheSet() << endl;
    SetListContainer setB = SetListContainer::creatingSet (rand() % 4 + 6, 5, 500, 10);
    cout << "Вывод множества B: " << endl << setB.printSet(" | ") << endl;
    cout << "Мощность множества B: " << endl << setB.powerOfTheSet() << endl;
    cout << "----------------После очистки----------------" << endl;
    setA.deleteSet();
    cout << "Вывод множества A: " << endl << setA.printSet(" | ") << endl;
    cout << "Мощность множества A: " << endl << setA.powerOfTheSet() << endl;
    setB.deleteSet();
    cout << "Вывод множества B: " << endl << setB.printSet(" | ") << endl;
    cout << "Мощность множества B: " << endl << setB.powerOfTheSet() << endl << endl;
    SetListContainer A =  SetListContainer::creatingSet (rand() % 4 + 6, 5, 200, 10);
    SetListContainer B =  SetListContainer::creatingSet (rand() % 4 + 6, 5, 200, 5);
    cout << "Вывод множества A: " << endl << A.printSet(" | ") << endl;
    cout << "Вывод множества B: " << endl << B.printSet(" | ") << endl;
    cout << "Является ли A подмножеством B: " << SetListContainer::isSubset(A, B) << endl;
    cout << "Равны ли множества A и B: " << SetListContainer::isEqual(A, B) << endl;
    SetListContainer C = SetListContainer::combiningSets(A, B);
    cout << "Вывод объединения множеств: " << endl << C.printSet(" | ") << endl;
    SetListContainer D = SetListContainer::intersectionOfSets(A, B);
    cout << "Вывод пересечения множеств: " << endl << D.printSet(" | ") << endl;
    SetListContainer E = SetListContainer::differenceOfSets(A, B);
    cout << "Вывод разности множеств A и B: " << endl << E.printSet(" | ") << endl;
    SetListContainer F = SetListContainer::differenceOfSets(B, A);
    cout << "Вывод разности множеств B и A:" << endl << F.printSet(" | ") << endl;
    SetListContainer G = SetListContainer::symmetricDifferenceOfSets(A, B);
    cout << "Вывод симметричной разности множеств: " << endl << G.printSet(" | ") << endl;
    return 0;
}