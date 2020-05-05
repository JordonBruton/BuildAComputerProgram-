#pragma once
#include<string>
#include <vector>
using namespace std;

class LocalVariables
{

public:
	string desired_gpu_brand;
	double desired_gpu = 0.0;
	string processor_brand;
	double desired_processor;
	double new_budget;
	double budget;
	vector<string> final_pc{};
	string desired_ps_brand;
	double desired_ps;
	string desired_ram_brand;
	double desired_ram;
	string desired_tower_brand;
	double desired_tower;

public:
	void setBudget(double& x)
	{
		budget = x;
	}
	double& getBudget()
	{
		return budget;
	}
	void setNewBudget(double& x, double& y)
	{
		new_budget = x - y;
	}
	double& getNewBudget()
	{
		return new_budget;
	}
};
