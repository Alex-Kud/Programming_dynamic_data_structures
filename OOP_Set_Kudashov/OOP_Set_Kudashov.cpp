#include "SetLab3_Kudashov.h"
int main() {
    srand( time(nullptr));
    setlocale(LC_ALL, "Russian");
    cout << "=================���� ���� 3=================" << endl;
    List setA = List::creatingSet (rand() % 4 + 6, 5, 500, 5);
    cout << "����� ��������� A: " << endl << setA.printSet(" | ") << endl;
    cout << "�������� ��������� A: " << endl << setA.powerOfTheSet() << endl;
    List setB = List::creatingSet (rand() % 4 + 6, 5, 500, 10);
    cout << "����� ��������� B: " << endl << setB.printSet(" | ") << endl;
    cout << "�������� ��������� B: " << endl << setB.powerOfTheSet() << endl;
    cout << "----------------����� �������----------------" << endl;
    setA.deleteSet();
    cout << "����� ��������� A: " << endl << setA.printSet(" | ") << endl;
    cout << "�������� ��������� A: " << endl << setA.powerOfTheSet() << endl;
    setB.deleteSet();
    cout << "����� ��������� B: " << endl << setB.printSet(" | ") << endl;
    cout << "�������� ��������� B: " << endl << setB.powerOfTheSet() << endl << endl;
    List A =  List::creatingSet (rand() % 4 + 6, 5, 200, 10);
    List B =  List::creatingSet (rand() % 4 + 6, 5, 200, 5);
    cout << "����� ��������� A: " << endl << A.printSet(" | ") << endl;
    cout << "����� ��������� B: " << endl << B.printSet(" | ") << endl;
    cout << "�������� �� A ������������� B: " << List::isSubset(A,B) << endl;
    cout << "����� �� ��������� A � B: " << List::isEqual(A,B) << endl;
    List C = List::combiningSets(A,B);
    cout << "����� ����������� ��������: " << endl << C.printSet(" | ") << endl;
    List D = List::intersectionOfSets(A,B);
    cout << "����� ����������� ��������: " << endl << D.printSet(" | ") << endl;
    List E = List::differenceOfSets(A,B);
    cout << "����� �������� �������� A � B: " << endl << E.printSet(" | ") << endl;
    List F = List::differenceOfSets(B,A);
    cout << "����� �������� �������� B � A:" << endl << F.printSet(" | ") << endl;
    List G = List::symmetricDifferenceOfSets(A,B);
    cout << "����� ������������ �������� ��������: " << endl << G.printSet(" | ") << endl;
    return 0;
}