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
		std::cout << "�������� ����: \n";
		std::cout << "1. ����� \n";
		std::cout << "2. ������ \n";
		std::cout << "3. ����� \n";
		std::cout << "4. ������� \n";
		std::cout << "��� ������ ������� 0 \n";
	}

	void Planner::get_subject_list()
	{
		print_subject_menu();
		int answer;
		std::cin >> answer;
		switch (answer) {
		case 0:
			std::cout << "�� ��������! \n";
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
			std::cout << "������ �������� ���. ����������, ��������� ���� \n";
			return get_subject_list();
		}
	}


