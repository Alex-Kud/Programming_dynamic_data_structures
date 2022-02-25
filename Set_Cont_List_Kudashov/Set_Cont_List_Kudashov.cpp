#include "SetLab4_Kudashov.h"

int main() {
    srand( time(nullptr));
    setlocale(LC_ALL, "Russian");
    cout << "=================���� ���� 4=================" << endl;
    SetListContainer setA = SetListContainer::creatingSet (rand() % 4 + 6, 5, 500, 5);
    cout << "����� ��������� A: " << endl << setA.printSet(" | ") << endl;
    cout << "�������� ��������� A: " << endl << setA.powerOfTheSet() << endl;
    SetListContainer setB = SetListContainer::creatingSet (rand() % 4 + 6, 5, 500, 10);
    cout << "����� ��������� B: " << endl << setB.printSet(" | ") << endl;
    cout << "�������� ��������� B: " << endl << setB.powerOfTheSet() << endl;
    cout << "----------------����� �������----------------" << endl;
    setA.deleteSet();
    cout << "����� ��������� A: " << endl << setA.printSet(" | ") << endl;
    cout << "�������� ��������� A: " << endl << setA.powerOfTheSet() << endl;
    setB.deleteSet();
    cout << "����� ��������� B: " << endl << setB.printSet(" | ") << endl;
    cout << "�������� ��������� B: " << endl << setB.powerOfTheSet() << endl << endl;
    SetListContainer A =  SetListContainer::creatingSet (rand() % 4 + 6, 5, 200, 10);
    SetListContainer B =  SetListContainer::creatingSet (rand() % 4 + 6, 5, 200, 5);
    cout << "����� ��������� A: " << endl << A.printSet(" | ") << endl;
    cout << "����� ��������� B: " << endl << B.printSet(" | ") << endl;
    cout << "�������� �� A ������������� B: " << SetListContainer::isSubset(A, B) << endl;
    cout << "����� �� ��������� A � B: " << SetListContainer::isEqual(A, B) << endl;
    SetListContainer C = SetListContainer::combiningSets(A, B);
    cout << "����� ����������� ��������: " << endl << C.printSet(" | ") << endl;
    SetListContainer D = SetListContainer::intersectionOfSets(A, B);
    cout << "����� ����������� ��������: " << endl << D.printSet(" | ") << endl;
    SetListContainer E = SetListContainer::differenceOfSets(A, B);
    cout << "����� �������� �������� A � B: " << endl << E.printSet(" | ") << endl;
    SetListContainer F = SetListContainer::differenceOfSets(B, A);
    cout << "����� �������� �������� B � A:" << endl << F.printSet(" | ") << endl;
    SetListContainer G = SetListContainer::symmetricDifferenceOfSets(A, B);
    cout << "����� ������������ �������� ��������: " << endl << G.printSet(" | ") << endl;
    return 0;
}