#pragma once
#include <iostream>
#include <list>
#include <string>

class Lists
{
public:
	Lists();
	~Lists();

	void main_menu();
	void print();

	void tasks();

private:
	std::list<std::string> planner;
	int ans = 0;
	std::string task;

};