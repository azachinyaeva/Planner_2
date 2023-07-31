#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Subjects.h"
#include "Lists.h"

class Planner
{
private:
	std::string name;
	std::vector<Lists*> subj;

public:
	Planner(std::string name);
	~Planner();
	std::string get_name();
	void print_subject_menu();
	void get_subject_list();

};