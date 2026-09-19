// Командный проект. Группа ПИ-53.
// Команда: Черниченко (в. 70, техлид), Храпунов (в. 54).
#include <iostream>
#include <windows.h>
using namespace std;

// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
 #include "chernichenko.h"
// #include "khrapunov.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int choice;
    do {
        cout << "\n=== Командный проект: сборник расчётов ===\n";

        // === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
	cout << "1. Градусы -> радианы\n";
	cout << "2. Радианы -> градусы\n";
        // === КОНЕЦ БЛОКА МЕНЮ ===
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
        // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
        case 1: {
	    double d;
	    cout << "Введите угол в градусах: ";
	    cin >> d;
	    cout << "Угол " << d << "° = " << degToRad(d) << " рад\n";
	    break;
	}
	case 2: {
	    double r;
	    cout << "Введите угол в радианах: ";
	    cin >> r;
	    cout << "Угол " << r << " рад = " << radToDeg(r) << "°\n";
	    break;
	}
	// === КОНЕЦ БЛОКА ОБРАБОТКИ ===
        case 0:
            cout << "Работа завершена.\n";
            break;
        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}
