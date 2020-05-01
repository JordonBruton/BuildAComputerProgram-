#include "Processors.h"
#include <unordered_map>
#include <iostream>
using namespace std;

void Processors::PickingOutProcessor()
{
	unordered_map<double, string> amd_processor{};
	unordered_map<double, string> intel_processor{};

	amd_processor = {
		{432.41, "AMD Ryzen 9 3900x"},
		{344.99, "AMD Ryzen 7 3800x"},
		{298.99, "AMD Ryzen 7 3700x"},
		{204.99, "AMD Ryzen 5 3600x"},
		{172.76, "AMD Ryzen 5 3600"},
		{94.99, "AMD Ryzen 3200G"},
	};

	intel_processor = {
		{524.99, "Intel Core i9-9900K"},
		{379.99, "Intel Core i7-9700K"},
		{174.99, "Intel Core i5-9600K"},
		{278.99, "Intel Core i5-8600K"},
		{411.99, "Intel Core i7-8700K"},
		{69.99, "Intel Pentium G5400"}
	};

	cout << "Step 1: Pick out a processor brand: Intel, AMD" << endl;
	cin >> processor_brand;

	if (processor_brand != "AMD" || "amd")
	{
		cout << "Here are AMD options : " << endl;

		for (auto& elm : amd_processor)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "What proccesor do you want?" << endl;
		cout << "	Enter the amount of the desired processor" << endl;
		cin >> desired_processor;
		for (auto& elm : amd_processor)
		{
			if (elm.first == desired_processor)
			{
				cout << "The processor you pick out is: " << elm.second << endl;

				final_pc.push_back(elm.second);
			}
		}

		new_budget = budget - desired_processor;
		cout << "Here is your new budget:  " << new_budget;

	}
	else if (processor_brand != "Intel" || "intel")
	{
		cout << "Here are your Intel options: " << endl;

		for (auto& elm : intel_processor)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "What proccesor do you want?" << endl;
		cout << "	Enter the amount of the desired processor" << endl;
		cin >> desired_processor;
		for (auto& elm : intel_processor)
		{
			if (elm.first == desired_processor)
			{
				cout << "The processor you pick out is: " << elm.second << endl;

				final_pc.push_back(elm.second);
			}
		}

		new_budget = budget - desired_processor;
		cout << "Here is your new budget:  " << new_budget << endl;
	}
	else
	{
		cout << "Brand not available!" << endl;
	}

	
}

