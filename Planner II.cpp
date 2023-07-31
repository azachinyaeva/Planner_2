#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "Lists.h"
#include "Planner.h"

int main() {
	setlocale(LC_ALL, "Russian");
	std::string name;
	std::vector<Planner> Users;
	int ans;
	std::cout << "Добро пожаловать в планнер 2.0! \n";

	do {
		system("cls");
		std::cout << "Выберите действие: \n";
		std::cout << "1. Создать пользователя \n";
		std::cout << "2. Выбрать пользователя \n";
		std::cout << "Для выхода нажмите 0 \n";
		std::cin >> ans;
		system("cls");
		switch (ans) {
		case 0:
			std::cout << "До свидания! \n";
			break;
		case 1:
		{
			//Создание пользователя
			std::cout << "Введите имя пользователя: ";
			std::cin >> name;
			Planner User(name);
			Users.push_back(User);
			User.get_subject_list();
			break;
		}
		case 2:
			if (Users.empty()) {
				std::cout << "Список пользователей пуст!";
				break;
			}
			else {
				int num = 1;
				for (auto& user : Users) {
					std::cout << num << ". " << user.get_name() << '\n';
					++num;
				}
				std::cout << "Введите номер пользователя: \n";
				int user_num;
				std::cin >> user_num;
				if (user_num <= Users.size() && user_num > 0) {
					Users[user_num - 1].get_subject_list();
				}
				else {
					std::cout << "Ошибка выбора пользователя: \n";
					break;
				}
			}

		}
	} while (ans != 0);
}