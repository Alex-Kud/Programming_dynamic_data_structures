#include "SetLab5_Kudashov.h"

int main() {
    srand( time(nullptr));
    setlocale(LC_ALL, "Russian");
    cout << "=================ДЕМО ЛАБЫ 4=================" << endl;
    SetSetContainer setA = SetSetContainer::creatingSet (rand() % 4 + 6, 5, 500, 5);
    cout << "Вывод множества A: " << endl << setA.printSet(" | ") << endl;
    cout << "Мощность множества A: " << endl << setA.powerOfTheSet() << endl;
    SetSetContainer setB = SetSetContainer::creatingSet (rand() % 4 + 6, 5, 500, 10);
    cout << "Вывод множества B: " << endl << setB.printSet(" | ") << endl;
    cout << "Мощность множества B: " << endl << setB.powerOfTheSet() << endl;
    cout << "----------------После очистки----------------" << endl;
    setA.deleteSet();
    cout << "Вывод множества A: " << endl << setA.printSet(" | ") << endl;
    cout << "Мощность множества A: " << endl << setA.powerOfTheSet() << endl;
    setB.deleteSet();
    cout << "Вывод множества B: " << endl << setB.printSet(" | ") << endl;
    cout << "Мощность множества B: " << endl << setB.powerOfTheSet() << endl << endl;
    SetSetContainer A =  SetSetContainer::creatingSet (rand() % 4 + 6, 5, 200, 10);
    SetSetContainer B =  SetSetContainer::creatingSet (rand() % 4 + 6, 5, 200, 5);
    cout << "Вывод множества A: " << endl << A.printSet(" | ") << endl;
    cout << "Вывод множества B: " << endl << B.printSet(" | ") << endl;
    cout << "Является ли A подмножеством B: " << SetSetContainer::isSubset(A, B) << endl;
    cout << "Равны ли множества A и B: " << SetSetContainer::isEqual(A, B) << endl;
    SetSetContainer C = SetSetContainer::combiningSets(A, B);
    cout << "Вывод объединения множеств: " << endl << C.printSet(" | ") << endl;
    SetSetContainer D = SetSetContainer::intersectionOfSets(A, B);
    cout << "Вывод пересечения множеств: " << endl << D.printSet(" | ") << endl;
    SetSetContainer E = SetSetContainer::differenceOfSets(A, B);
    cout << "Вывод разности множеств A и B: " << endl << E.printSet(" | ") << endl;
    SetSetContainer F = SetSetContainer::differenceOfSets(B, A);
    cout << "Вывод разности множеств B и A:" << endl << F.printSet(" | ") << endl;
    SetSetContainer G = SetSetContainer::symmetricDifferenceOfSets(A, B);
    cout << "Вывод симметричной разности множеств: " << endl << G.printSet(" | ") << endl;
    return 0;
}
