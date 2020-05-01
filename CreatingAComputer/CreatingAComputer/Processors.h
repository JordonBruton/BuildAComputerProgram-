#pragma once
#include <unordered_map>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

class Processors
{
	

public:
	string processor_brand;
	double desired_processor = 0.0;
	int new_budget = 0;
	double budget = 0.0;
	vector<string> final_pc{};

	void PickingOutProcessor();

};

