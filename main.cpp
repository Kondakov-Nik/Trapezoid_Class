// Автор Кондаков Никита
// Класс Трапеция

#include <iostream>
#include "Trap.h"

using namespace std;


int main() {

	try {
		Trap t1, t2;

		//Получаем площадь
		t1.set_trap(6, 4, 6, 3);
		cout << endl;
		cout << t1.square();
		cout << endl;

		//Получаем периметр
		t2.set_trap(12, 4, 9, 2);
		cout << endl;
		cout << t2.perimeter();
		cout << endl;

		return 0;
	}
	catch (invalid_argument f) { /// Проверка исключительных ситуаций
		cout << f.what(); ///Вывод сообщения об ошибке в ходе проверки исключительных ситуации
	}
}