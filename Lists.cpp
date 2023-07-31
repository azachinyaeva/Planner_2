#include "Lists.h"


	Lists::Lists() {}
	Lists::~Lists() {};

	void Lists::main_menu() {
		std::cout << std::endl;
		std::cout << "1. Добавить важную задачу \n";
		std::cout << "2. Добавить обычную задачу \n";
		std::cout << "3. Получить список задач \n";
		std::cout << "4. Отметить задачу выполненной \n";
		std::cout << "5. Показать самую важную задачу \n";
		std::cout << "6. Очистить список задач \n";
		std::cout << "Чтобы вернуться к списку тем, нажмите 0 \n";
	}

	void Lists::print() {

		if (planner.empty())
		{
			std::cout << "Список пуст! \n";
		}
		else {
			int number = 1;
			for (const auto& task : planner) {

				std::cout << number << ". " << task << '\n';
				++number;
			}
		}
	}

	void Lists::tasks() {

		do {
			main_menu();
			std::cin >> ans;
			auto iter = planner.begin();
			system("cls");
			switch (ans) {
			case 0:
				break;
			case 1:
				std::cout << "Введите задачу: " << '\n';
				std::cin.ignore();
				getline(std::cin, task);
				planner.push_front(task);
				break;
			case 2:
				std::cout << "Введите задачу: ";
				std::cin.ignore();
				getline(std::cin, task);
				planner.push_back(task);
				break;
			case 3:
				print();
				break;
			case 4:
				print();
				if (!(planner.empty())) {
					int num;
					std::cout << "Введите номер задачи: ";
					std::cin >> num;
					iter = planner.begin();
					advance(iter, num - 1);
					iter = planner.erase(iter);
					break;
				}
				else {
					break;
				}
			case 5:
				if (planner.empty())
				{
					std::cout << "Список пуст! \n";
				}
				else {
					iter = planner.begin();
					std::cout << "Самая важная задача: " << *iter << '\n';
				}
				break;
			case 6:
				if (planner.empty())
				{
					std::cout << "Список пуст! \n";
				}
				else {
					planner.clear();
				}
				break;
			default:
				std::cout << "Такого варианта нет. Пожалуйста, повторите ввод \n";
			}
		} while (ans != 0);
	}

