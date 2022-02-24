#include "SetLab1_12_Kudashov.h"
#include <clocale> //����������� ��� ������� setlocale()
int main() {
    srand( time(nullptr) );
    setlocale(LC_ALL, "Russian");
    cout << "=================���� ���� 1=================" << endl;
    Node* setA = creatingSet (rand() % 4 + 6, 5, 500, 5);
    cout << "����� ��������� A: " << endl << printSet(setA, " | ") << endl;
    cout << "�������� ��������� A: " << endl << powerOfTheSet(setA) << endl;
    Node* setB = creatingSet (rand() % 4 + 6, 5, 500, 10);
    cout << "����� ��������� B: " << endl << printSet(setB, " | ") << endl;
    cout << "�������� ��������� B: " << endl << powerOfTheSet(setB) << endl;
    cout << "----------------����� �������----------------" << endl;
    deleteSet(setA);
    cout << "����� ��������� A: " << endl << printSet(setA, " | ") << endl;
    cout << "�������� ��������� A: " << endl << powerOfTheSet(setA) << endl;
    deleteSet(setB);
    cout << "����� ��������� B: " << endl << printSet(setB, " | ") << endl;
    cout << "�������� ��������� B: " << endl << powerOfTheSet(setB) << endl;
    cout << endl << "=================���� ���� 2=================" << endl;
    Node* A =  creatingSet (rand() % 4 + 6, 5, 200, 10);
    Node* B =  creatingSet (rand() % 4 + 6, 5, 200, 5);
    cout << "����� ��������� A: " << endl << printSet(A, " | ") << endl;
    cout << "����� ��������� B: " << endl << printSet(B, " | ") << endl;
    cout << "�������� �� A ������������� B: " << isSubset(A,B) << endl;
    cout << "����� �� ��������� A � B: " << isEqual(A,B) << endl;
    Node* C = combiningSets(A,B);
    cout << "����� ����������� ��������: " << endl << printSet(C, " | ") << endl;
    Node* D = intersectionOfSets(A,B);
    cout << "����� ����������� ��������: " << endl << printSet(D, " | ") << endl;
    Node* E = differenceOfSets(A,B);
    cout << "����� �������� �������� A � B: " << endl << printSet(E, " | ") << endl;
    Node* F = differenceOfSets(B,A);
    cout << "����� �������� �������� B � A: " << endl << printSet(F, " | ") << endl;
    Node* G = symmetricDifferenceOfSets(A,B);
    cout << "����� ������������ �������� ��������: " << endl << printSet(G, " | ") << endl;
    return 0;
}