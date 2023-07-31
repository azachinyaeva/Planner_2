#include "Planner.h"

	Planner::Planner(std::string name) : name(name)
	{
		for (int i = 0; i < SUBJ_COUNT; ++i)
		{
			subj.push_back(new Lists());
		}
	}

	Planner::~Planner() {}

	std::string Planner::get_name()
	{
		return name;
	}

	void Planner::print_subject_menu()
	{
		std::cout << "Выберите тему: \n";
		std::cout << "1. Учёба \n";
		std::cout << "2. Работа \n";
		std::cout << "3. Хобби \n";
		std::cout << "4. Покупки \n";
		std::cout << "Для выхода нажмите 0 \n";
	}

	void Planner::get_subject_list()
	{
		print_subject_menu();
		int answer;
		std::cin >> answer;
		switch (answer) {
		case 0:
			std::cout << "До свидания! \n";
			break;
		case 1:
		case 2:
		case 3:
		case 4:
			subj[(answer - 1)]->tasks();
			get_subject_list();
			break;
		default:
			system("cls");
			std::cout << "Такого варианта нет. Пожалуйста, повторите ввод \n";
			return get_subject_list();
		}
	}


