#include "SetLab1_12_Kudashov.h"

int main() {
    srand( time(0) );
    Node* setA = creatingSet (rand() % 4 + 6, 5, 500, 5);
    cout << "Print set A: " << printSet(setA, " | ") << endl;
    cout << "Power set A: " << powerOfTheSet(setA) << endl;
    Node* setB = creatingSet (rand() % 4 + 6, 5, 500, 10);
    cout << "Print set B: " << printSet(setB, " | ") << endl;
    cout << "Power set B: " << powerOfTheSet(setB) << endl;
    deleteSet(setA);
    cout << "---------------After cleaning---------------" << endl;
    cout << "Print set A: " << printSet(setA, " | ") << endl;
    cout << "Power set A: " << powerOfTheSet(setA) << endl;
    deleteSet(setB);
    cout << "Print set B: " << printSet(setB, " | ") << endl;
    cout << "Power set B: " << powerOfTheSet(setB) << endl;
    return 0;
}