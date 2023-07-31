#include "Lists.h"


	Lists::Lists() {}
	Lists::~Lists() {};

	void Lists::main_menu() {
		std::cout << std::endl;
		std::cout << "1. �������� ������ ������ \n";
		std::cout << "2. �������� ������� ������ \n";
		std::cout << "3. �������� ������ ����� \n";
		std::cout << "4. �������� ������ ����������� \n";
		std::cout << "5. �������� ����� ������ ������ \n";
		std::cout << "6. �������� ������ ����� \n";
		std::cout << "����� ��������� � ������ ���, ������� 0 \n";
	}

	void Lists::print() {

		if (planner.empty())
		{
			std::cout << "������ ����! \n";
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
				std::cout << "������� ������: " << '\n';
				std::cin.ignore();
				getline(std::cin, task);
				planner.push_front(task);
				break;
			case 2:
				std::cout << "������� ������: ";
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
					std::cout << "������� ����� ������: ";
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
					std::cout << "������ ����! \n";
				}
				else {
					iter = planner.begin();
					std::cout << "����� ������ ������: " << *iter << '\n';
				}
				break;
			case 6:
				if (planner.empty())
				{
					std::cout << "������ ����! \n";
				}
				else {
					planner.clear();
				}
				break;
			default:
				std::cout << "������ �������� ���. ����������, ��������� ���� \n";
			}
		} while (ans != 0);
	}

