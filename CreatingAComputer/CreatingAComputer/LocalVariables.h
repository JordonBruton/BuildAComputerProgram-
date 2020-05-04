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
	double new_budget = 0.0;
	double budget = 0.0;
	vector<string> final_pc{};
};
