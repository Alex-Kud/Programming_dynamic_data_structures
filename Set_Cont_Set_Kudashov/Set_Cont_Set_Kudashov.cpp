#include "SetLab5_Kudashov.h"

int main() {
    srand( time(nullptr));
    setlocale(LC_ALL, "Russian");
    cout << "=================���� ���� 4=================" << endl;
    SetSetContainer setA = SetSetContainer::creatingSet (rand() % 4 + 6, 5, 500, 5);
    cout << "����� ��������� A: " << endl << setA.printSet(" | ") << endl;
    cout << "�������� ��������� A: " << endl << setA.powerOfTheSet() << endl;
    SetSetContainer setB = SetSetContainer::creatingSet (rand() % 4 + 6, 5, 500, 10);
    cout << "����� ��������� B: " << endl << setB.printSet(" | ") << endl;
    cout << "�������� ��������� B: " << endl << setB.powerOfTheSet() << endl;
    cout << "----------------����� �������----------------" << endl;
    setA.deleteSet();
    cout << "����� ��������� A: " << endl << setA.printSet(" | ") << endl;
    cout << "�������� ��������� A: " << endl << setA.powerOfTheSet() << endl;
    setB.deleteSet();
    cout << "����� ��������� B: " << endl << setB.printSet(" | ") << endl;
    cout << "�������� ��������� B: " << endl << setB.powerOfTheSet() << endl << endl;
    SetSetContainer A =  SetSetContainer::creatingSet (rand() % 4 + 6, 5, 200, 10);
    SetSetContainer B =  SetSetContainer::creatingSet (rand() % 4 + 6, 5, 200, 5);
    cout << "����� ��������� A: " << endl << A.printSet(" | ") << endl;
    cout << "����� ��������� B: " << endl << B.printSet(" | ") << endl;
    cout << "�������� �� A ������������� B: " << SetSetContainer::isSubset(A, B) << endl;
    cout << "����� �� ��������� A � B: " << SetSetContainer::isEqual(A, B) << endl;
    SetSetContainer C = SetSetContainer::combiningSets(A, B);
    cout << "����� ����������� ��������: " << endl << C.printSet(" | ") << endl;
    SetSetContainer D = SetSetContainer::intersectionOfSets(A, B);
    cout << "����� ����������� ��������: " << endl << D.printSet(" | ") << endl;
    SetSetContainer E = SetSetContainer::differenceOfSets(A, B);
    cout << "����� �������� �������� A � B: " << endl << E.printSet(" | ") << endl;
    SetSetContainer F = SetSetContainer::differenceOfSets(B, A);
    cout << "����� �������� �������� B � A:" << endl << F.printSet(" | ") << endl;
    SetSetContainer G = SetSetContainer::symmetricDifferenceOfSets(A, B);
    cout << "����� ������������ �������� ��������: " << endl << G.printSet(" | ") << endl;
    return 0;
}
