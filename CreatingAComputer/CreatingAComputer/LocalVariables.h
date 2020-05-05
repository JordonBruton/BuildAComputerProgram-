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
	double desired_processor = 0.0;
	double new_budget;
	double budget;
	vector<string> final_pc{};

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
