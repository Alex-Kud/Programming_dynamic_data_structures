#include "SetLab1_12_Kudashov.h"
#include "SetLab3_Kudashov.h"
#include "SetLab4_Kudashov.h"
#include "SetLab5_Kudashov.h"
#include <chrono>

int main() {
    srand(time(nullptr));
    setlocale(LC_ALL, "Russian");
    while(true) {
        cout << "Введите команду: \n1 - провести тестирование\n2 - завершить работу\n";
        int command;
        cin >> command;
        if (command == 2) return 1;
        if (command != 1) {
            cout << "Ввод команды некорректен. Повторите попытку\n";
            continue;
        }
        int N;
        cout << "Введите размерность генерируемых множеств (>= 1000):\n";
        cin >> N;
        if (N < 1000) {
            cout << "Ввод числа неверный. Повторите попытку\n";
            continue;
        }
        cout << "Тесты:\n";
        cout << "1: Создание множества из " << to_string(N) << " элементов\n";
        cout << "2: Мощность множества\n";
        cout << "3: Подмножество A|A\n";
        cout << "4: Подмножество B|A\n";
        cout << "5: Равенство A=A\n";
        cout << "6: Равенство B=A\n";
        cout << "7: Объединения множеств A и B\n";
        cout << "8: Пересечение множеств A и B\n";
        cout << "9: Разность множеств A и B\n";
        cout << "10: Симметричная разность множеств A и B\n";
        // Создание множеств из N элементов
        auto startTest11 = chrono::high_resolution_clock::now();
        Node* setA1 = creatingSet (rand() % N, 5, 8*N, 5);
        auto finishTest11 = chrono::high_resolution_clock::now();
        auto timeTest11 = chrono::duration_cast<chrono::duration < double>>(finishTest11 - startTest11);
        auto startTest12 = chrono::high_resolution_clock::now();
        SetOOP setA2 = SetOOP::creatingSet (rand() % N, 5, 8*N, 5);
        auto finishTest12 = chrono::high_resolution_clock::now();
        auto timeTest12 = chrono::duration_cast<chrono::duration < double>>(finishTest12 - startTest12);
        auto startTest13 = chrono::high_resolution_clock::now();
        SetListContainer setA3 = SetListContainer::creatingSet (rand() % N, 5, 8*N, 5);
        auto finishTest13 = chrono::high_resolution_clock::now();
        auto timeTest13 = chrono::duration_cast<chrono::duration < double>>(finishTest13 - startTest13);
        auto startTest14 = chrono::high_resolution_clock::now();
        SetSetContainer setA4 = SetSetContainer::creatingSet (rand() % N, 5, 8*N, 5);
        auto finishTest14 = chrono::high_resolution_clock::now();
        auto timeTest14 = chrono::duration_cast<chrono::duration < double>>(finishTest14 - startTest14);
        Node* setB1 = creatingSet (rand() % N, 5, 8*N, 5);
        SetOOP setB2 = SetOOP::creatingSet (rand() % N, 5, 8*N, 5);
        SetListContainer setB3 = SetListContainer::creatingSet (rand() % N, 5, 8*N, 5);
        SetSetContainer setB4 = SetSetContainer::creatingSet (rand() % N, 5, 8*N, 5);
        // Вычисление мощности множеств
        auto startTest21 = chrono::high_resolution_clock::now();
        powerOfTheSet(setA1);
        auto finishTest21 = chrono::high_resolution_clock::now();
        auto timeTest21 = chrono::duration_cast<chrono::duration < double>>(finishTest21 - startTest21);
        auto startTest22 = chrono::high_resolution_clock::now();
        setA2.powerOfTheSet();
        auto finishTest22 = chrono::high_resolution_clock::now();
        auto timeTest22 = chrono::duration_cast<chrono::duration < double>>(finishTest22 - startTest22);
        auto startTest23 = chrono::high_resolution_clock::now();
        setA3.powerOfTheSet();
        auto finishTest23 = chrono::high_resolution_clock::now();
        auto timeTest23 = chrono::duration_cast<chrono::duration < double>>(finishTest23 - startTest23);
        auto startTest24 = chrono::high_resolution_clock::now();
        setA4.powerOfTheSet();
        auto finishTest24 = chrono::high_resolution_clock::now();
        auto timeTest24 = chrono::duration_cast<chrono::duration < double>>(finishTest24 - startTest24);
        // Подмножество A|A
        auto startTest31 = chrono::high_resolution_clock::now();
        isSubset(setA1,setA1);
        auto finishTest31 = chrono::high_resolution_clock::now();
        auto timeTest31 = chrono::duration_cast<chrono::duration < double>>(finishTest31 - startTest31);
        auto startTest32 = chrono::high_resolution_clock::now();
        SetOOP::isSubset(setA2, setA2);
        auto finishTest32 = chrono::high_resolution_clock::now();
        auto timeTest32 = chrono::duration_cast<chrono::duration < double>>(finishTest32 - startTest32);
        auto startTest33 = chrono::high_resolution_clock::now();
        SetListContainer::isSubset(setA3, setA3);
        auto finishTest33 = chrono::high_resolution_clock::now();
        auto timeTest33 = chrono::duration_cast<chrono::duration < double>>(finishTest33 - startTest33);
        auto startTest34 = chrono::high_resolution_clock::now();
        SetSetContainer::isSubset(setA4, setA4);
        auto finishTest34 = chrono::high_resolution_clock::now();
        auto timeTest34 = chrono::duration_cast<chrono::duration < double>>(finishTest34 - startTest34);
        // Подмножество A|B
        auto startTest41 = chrono::high_resolution_clock::now();
        isSubset(setA1,setB1);
        auto finishTest41 = chrono::high_resolution_clock::now();
        auto timeTest41 = chrono::duration_cast<chrono::duration < double>>(finishTest41 - startTest41);
        auto startTest42 = chrono::high_resolution_clock::now();
        SetOOP::isSubset(setA2, setB2);
        auto finishTest42 = chrono::high_resolution_clock::now();
        auto timeTest42 = chrono::duration_cast<chrono::duration < double>>(finishTest42 - startTest42);
        auto startTest43 = chrono::high_resolution_clock::now();
        SetListContainer::isSubset(setA3, setB3);
        auto finishTest43 = chrono::high_resolution_clock::now();
        auto timeTest43 = chrono::duration_cast<chrono::duration < double>>(finishTest43 - startTest43);
        auto startTest44 = chrono::high_resolution_clock::now();
        SetSetContainer::isSubset(setA4, setB4);
        auto finishTest44 = chrono::high_resolution_clock::now();
        auto timeTest44 = chrono::duration_cast<chrono::duration < double>>(finishTest44 - startTest44);
        // Подмножество A=A
        auto startTest51 = chrono::high_resolution_clock::now();
        isEqual(setA1,setA1);
        auto finishTest51 = chrono::high_resolution_clock::now();
        auto timeTest51 = chrono::duration_cast<chrono::duration < double>>(finishTest51 - startTest51);
        auto startTest52 = chrono::high_resolution_clock::now();
        SetOOP::isEqual(setA2, setA2);
        auto finishTest52 = chrono::high_resolution_clock::now();
        auto timeTest52 = chrono::duration_cast<chrono::duration < double>>(finishTest52 - startTest52);
        auto startTest53 = chrono::high_resolution_clock::now();
        SetListContainer::isEqual(setA3, setA3);
        auto finishTest53 = chrono::high_resolution_clock::now();
        auto timeTest53 = chrono::duration_cast<chrono::duration < double>>(finishTest53 - startTest53);
        auto startTest54 = chrono::high_resolution_clock::now();
        SetSetContainer::isEqual(setA4, setA4);
        auto finishTest54 = chrono::high_resolution_clock::now();
        auto timeTest54 = chrono::duration_cast<chrono::duration < double>>(finishTest54 - startTest54);
        // Подмножество A=B
        auto startTest61 = chrono::high_resolution_clock::now();
        isEqual(setA1,setB1);
        auto finishTest61 = chrono::high_resolution_clock::now();
        auto timeTest61 = chrono::duration_cast<chrono::duration < double>>(finishTest61 - startTest61);
        auto startTest62 = chrono::high_resolution_clock::now();
        SetOOP::isEqual(setA2, setB2);
        auto finishTest62 = chrono::high_resolution_clock::now();
        auto timeTest62 = chrono::duration_cast<chrono::duration < double>>(finishTest62 - startTest62);
        auto startTest63 = chrono::high_resolution_clock::now();
        SetListContainer::isEqual(setA3, setB3);
        auto finishTest63 = chrono::high_resolution_clock::now();
        auto timeTest63 = chrono::duration_cast<chrono::duration < double>>(finishTest63 - startTest63);
        auto startTest64 = chrono::high_resolution_clock::now();
        SetSetContainer::isEqual(setA4, setB4);
        auto finishTest64 = chrono::high_resolution_clock::now();
        auto timeTest64 = chrono::duration_cast<chrono::duration < double>>(finishTest64 - startTest64);
        // Объединение множеств A и B
        auto startTest71 = chrono::high_resolution_clock::now();
        combiningSets(setA1,setB1);
        auto finishTest71 = chrono::high_resolution_clock::now();
        auto timeTest71 = chrono::duration_cast<chrono::duration < double>>(finishTest71 - startTest71);
        auto startTest72 = chrono::high_resolution_clock::now();
        SetOOP::combiningSets(setA2, setB2);
        auto finishTest72 = chrono::high_resolution_clock::now();
        auto timeTest72 = chrono::duration_cast<chrono::duration < double>>(finishTest72 - startTest72);
        auto startTest73 = chrono::high_resolution_clock::now();
        SetListContainer::combiningSets(setA3, setB3);
        auto finishTest73 = chrono::high_resolution_clock::now();
        auto timeTest73 = chrono::duration_cast<chrono::duration < double>>(finishTest73 - startTest73);
        auto startTest74 = chrono::high_resolution_clock::now();
        SetSetContainer::combiningSets(setA4, setB4);
        auto finishTest74 = chrono::high_resolution_clock::now();
        auto timeTest74 = chrono::duration_cast<chrono::duration < double>>(finishTest74 - startTest74);
        // Пересечение множеств A и B
        auto startTest81 = chrono::high_resolution_clock::now();
        intersectionOfSets(setA1,setB1);
        auto finishTest81 = chrono::high_resolution_clock::now();
        auto timeTest81 = chrono::duration_cast<chrono::duration < double>>(finishTest81 - startTest81);
        auto startTest82 = chrono::high_resolution_clock::now();
        SetOOP::intersectionOfSets(setA2, setB2);
        auto finishTest82 = chrono::high_resolution_clock::now();
        auto timeTest82 = chrono::duration_cast<chrono::duration < double>>(finishTest82 - startTest82);
        auto startTest83 = chrono::high_resolution_clock::now();
        SetListContainer::intersectionOfSets(setA3, setB3);
        auto finishTest83 = chrono::high_resolution_clock::now();
        auto timeTest83 = chrono::duration_cast<chrono::duration < double>>(finishTest83 - startTest83);
        auto startTest84 = chrono::high_resolution_clock::now();
        SetSetContainer::intersectionOfSets(setA4, setB4);
        auto finishTest84 = chrono::high_resolution_clock::now();
        auto timeTest84 = chrono::duration_cast<chrono::duration < double>>(finishTest84 - startTest84);
        // Разность множеств A и B
        auto startTest91 = chrono::high_resolution_clock::now();
        differenceOfSets(setA1,setB1);
        auto finishTest91 = chrono::high_resolution_clock::now();
        auto timeTest91 = chrono::duration_cast<chrono::duration < double>>(finishTest91 - startTest91);
        auto startTest92 = chrono::high_resolution_clock::now();
        SetOOP::differenceOfSets(setA2, setB2);
        auto finishTest92 = chrono::high_resolution_clock::now();
        auto timeTest92 = chrono::duration_cast<chrono::duration < double>>(finishTest92 - startTest92);
        auto startTest93 = chrono::high_resolution_clock::now();
        SetListContainer::differenceOfSets(setA3, setB3);
        auto finishTest93 = chrono::high_resolution_clock::now();
        auto timeTest93 = chrono::duration_cast<chrono::duration < double>>(finishTest93 - startTest93);
        auto startTest94 = chrono::high_resolution_clock::now();
        SetSetContainer::differenceOfSets(setA4, setB4);
        auto finishTest94 = chrono::high_resolution_clock::now();
        auto timeTest94 = chrono::duration_cast<chrono::duration < double>>(finishTest94 - startTest94);
        // Симметричная разность множеств A и B
        auto startTest101 = chrono::high_resolution_clock::now();
        symmetricDifferenceOfSets(setA1,setB1);
        auto finishTest101 = chrono::high_resolution_clock::now();
        auto timeTest101 = chrono::duration_cast<chrono::duration < double>>(finishTest101 - startTest101);
        auto startTest102 = chrono::high_resolution_clock::now();
        SetOOP::symmetricDifferenceOfSets(setA2, setB2);
        auto finishTest102 = chrono::high_resolution_clock::now();
        auto timeTest102 = chrono::duration_cast<chrono::duration < double>>(finishTest102 - startTest102);
        auto startTest103 = chrono::high_resolution_clock::now();
        SetListContainer::symmetricDifferenceOfSets(setA3, setB3);
        auto finishTest103 = chrono::high_resolution_clock::now();
        auto timeTest103 = chrono::duration_cast<chrono::duration < double>>(finishTest103 - startTest103);
        auto startTest104 = chrono::high_resolution_clock::now();
        SetSetContainer::symmetricDifferenceOfSets(setA4, setB4);
        auto finishTest104 = chrono::high_resolution_clock::now();
        auto timeTest104 = chrono::duration_cast<chrono::duration < double>>(finishTest104 - startTest104);

        cout << "\n\n----------Результат----------\n\n";
        cout << "Тест \t Структуры \tООП \t\t Контейнер List \t Контейнер Set \n";
        cout << "1.NEW \t " << to_string((timeTest11).count()*10000) << "\t" << to_string((timeTest12).count()*10000) << " \t " << to_string((timeTest13).count()*10000) << " \t\t " << to_string((timeTest14).count()*10000) << "\n";
        cout << "2.POW \t " << to_string((timeTest21).count()*10000) << "\t" << to_string((timeTest22).count()*10000) << " \t " << to_string((timeTest23).count()*10000) << " \t\t " << to_string((timeTest24).count()*10000) << "\n";
        cout << "3.A|A \t " << to_string((timeTest31).count()*10000) << "\t" << to_string((timeTest32).count()*10000) << " \t " << to_string((timeTest33).count()*10000) << " \t\t " << to_string((timeTest34).count()*10000) << "\n";
        cout << "4.A|B \t " << to_string((timeTest41).count()*10000) << "\t" << to_string((timeTest42).count()*10000) << " \t " << to_string((timeTest43).count()*10000) << " \t\t " << to_string((timeTest44).count()*10000) << "\n";
        cout << "5.A=A \t " << to_string((timeTest51).count()*10000) << "\t" << to_string((timeTest52).count()*10000) << " \t " << to_string((timeTest53).count()*10000) << " \t\t " << to_string((timeTest54).count()*10000) << "\n";
        cout << "6.A=B \t " << to_string((timeTest61).count()*10000) << "\t" << to_string((timeTest62).count()*10000) << " \t " << to_string((timeTest63).count()*10000) << " \t\t " << to_string((timeTest64).count()*10000) << "\n";
        cout << "7.A+B \t " << to_string((timeTest71).count()*10000) << "\t" << to_string((timeTest72).count()*10000) << " \t " << to_string((timeTest73).count()*10000) << " \t\t " << to_string((timeTest74).count()*10000) << "\n";
        cout << "8.A/\\B \t " << to_string((timeTest81).count()*10000) << "\t" << to_string((timeTest82).count()*10000) << " \t " << to_string((timeTest83).count()*10000) << " \t\t " << to_string((timeTest84).count()*10000) << "\n";
        cout << "9.A-B \t " << to_string((timeTest91).count()*10000) << "\t" << to_string((timeTest92).count()*10000) << " \t " << to_string((timeTest93).count()*10000) << " \t\t " << to_string((timeTest94).count()*10000) << "\n";
        cout << "10.A\\B \t " << to_string((timeTest101).count()*10000) << "\t" << to_string((timeTest102).count()*10000) << " \t " << to_string((timeTest103).count()*10000) << " \t\t " << to_string((timeTest104).count()*10000) << "\n";
    }
    return 0;
}
