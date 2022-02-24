#include "SetLab3_Kudashov.h"
int main() {
    srand( time(nullptr));
    setlocale(LC_ALL, "Russian");
    cout << "=================ДЕМО ЛАБЫ 3=================" << endl;
    List setA = List::creatingSet (rand() % 4 + 6, 5, 500, 5);
    cout << "Вывод множества A: " << endl << setA.printSet(" | ") << endl;
    cout << "Мощность множества A: " << endl << setA.powerOfTheSet() << endl;
    List setB = List::creatingSet (rand() % 4 + 6, 5, 500, 10);
    cout << "Вывод множества B: " << endl << setB.printSet(" | ") << endl;
    cout << "Мощность множества B: " << endl << setB.powerOfTheSet() << endl;
    cout << "----------------После очистки----------------" << endl;
    setA.deleteSet();
    cout << "Вывод множества A: " << endl << setA.printSet(" | ") << endl;
    cout << "Мощность множества A: " << endl << setA.powerOfTheSet() << endl;
    setB.deleteSet();
    cout << "Вывод множества B: " << endl << setB.printSet(" | ") << endl;
    cout << "Мощность множества B: " << endl << setB.powerOfTheSet() << endl << endl;
    List A =  List::creatingSet (rand() % 4 + 6, 5, 200, 10);
    List B =  List::creatingSet (rand() % 4 + 6, 5, 200, 5);
    cout << "Вывод множества A: " << endl << A.printSet(" | ") << endl;
    cout << "Вывод множества B: " << endl << B.printSet(" | ") << endl;
    cout << "Является ли A подмножеством B: " << List::isSubset(A,B) << endl;
    cout << "Равны ли множества A и B: " << List::isEqual(A,B) << endl;
    List C = List::combiningSets(A,B);
    cout << "Вывод объединения множеств: " << endl << C.printSet(" | ") << endl;
    List D = List::intersectionOfSets(A,B);
    cout << "Вывод пересечения множеств: " << endl << D.printSet(" | ") << endl;
    List E = List::differenceOfSets(A,B);
    cout << "Вывод разности множеств A и B: " << endl << E.printSet(" | ") << endl;
    List F = List::differenceOfSets(B,A);
    cout << "Вывод разности множеств B и A:" << endl << F.printSet(" | ") << endl;
    List G = List::symmetricDifferenceOfSets(A,B);
    cout << "Вывод симметричной разности множеств: " << endl << G.printSet(" | ") << endl;
    return 0;
}