#ifndef SET_CONT_SET_KUDASHOV_SETLAB5_KUDASHOV_H
#define SET_CONT_SET_KUDASHOV_SETLAB5_KUDASHOV_H
#include <iostream>
#include <set>
using namespace std;

class SetSetContainer {
private:
    set <int> set;
public:
    // �������� �� ������ ���������
    bool emptySet();
    // �������� �������������� �������� ���������
    bool checkingOfExistence(int checking_value);
    // ���������� ������ �������� � ��������� � ������ ������
    void add(int adding_value);
    // �������� ���������
    int powerOfTheSet();
    // �������� ������ ���������
    static SetSetContainer creatingSet(int quantity, int min, int max, int k);
    // ����� ��������� ���������
    string printSet(const string& separator);
    // �������� ���������
    void deleteSet();
    // �������� �� A ������������� B
    static bool isSubset(SetSetContainer a, SetSetContainer b);
    // �������� �������� �� ���������
    static bool isEqual(SetSetContainer a, SetSetContainer b);
    // ����������� ��������
    static SetSetContainer combiningSets(SetSetContainer a, SetSetContainer b);
    // ����������� ��������
    static SetSetContainer intersectionOfSets(SetSetContainer a, SetSetContainer b);
    // �������� ��������
    static SetSetContainer differenceOfSets(SetSetContainer a, SetSetContainer b);
    // ������������ �������� ��������
    static SetSetContainer symmetricDifferenceOfSets(SetSetContainer a, SetSetContainer b);
    /*
    // ����������� ��������
    static SetSetContainer combiningSets(SetSetContainer a, SetSetContainer b);
    // ����������� ��������
    static SetSetContainer intersectionOfSets(SetSetContainer a, SetSetContainer b);
    // �������� ��������
    static SetSetContainer differenceOfSets(const SetSetContainer& a, SetSetContainer b);
    // ������������ �������� ��������
    static SetSetContainer symmetricDifferenceOfSets(const SetSetContainer& a, const SetSetContainer& b);
    */


};
#endif //SET_CONT_SET_KUDASHOV_SETLAB5_KUDASHOV_H
