#include "Processors.h"
#include <unordered_map>
#include <iostream>
#include "LocalVariables.h"
using namespace std;

void Processors::PickingOutProcessor(LocalVariables& originalLocal)
{
	unordered_map<double, string> amd_processor{};
	unordered_map<double, string> intel_processor{};
	LocalVariables local;
	
	local = originalLocal;

	amd_processor = {
		{94.99, "AMD Ryzen 3200G"},
		{172.76, "AMD Ryzen 5 3600"},
		{204.99, "AMD Ryzen 5 3600x"},
		{344.99, "AMD Ryzen 7 3800x"},
		{298.99, "AMD Ryzen 7 3700x"},
		{432.41, "AMD Ryzen 9 3900x"}
	};

	intel_processor = {
		{69.99, "Intel Pentium G5400"},
		{174.99, "Intel Core i5-9600K"},
		{278.99, "Intel Core i5-8600K"},
		{379.99, "Intel Core i7-9700K"},
		{411.99, "Intel Core i7-8700K"},
		{524.99, "Intel Core i9-9900K"},	
	};

	cout << "Pick out a processor brand: Intel or AMD" << endl;
	cin >> local.processor_brand;

	cout << endl;
	
	if (local.processor_brand == "AMD" || local.processor_brand == "amd")
	{
		cout << "Here are AMD options : " << endl;

		for (auto& elm : amd_processor)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "To get the desired Processor enter the amount it cost" << endl;
		cin >> local.desired_processor;
		for (auto& elm : amd_processor)
		{
			if (elm.first == local.desired_processor)
			{
				cout << "The processor you pick out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}
		
		local.setNewBudget(local.getBudget(), local.desired_processor);
		cout << "Here is your new budget:  " << local.getNewBudget() << endl;

	}
	else if (local.processor_brand == "Intel" || local.processor_brand == "intel")
	{
		cout << "Here are your Intel options: " << endl;

		for (auto& elm : intel_processor)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "To get the desired Processor enter the amount it cost" << endl;
		cin >> local.desired_processor;
		for (auto& elm : intel_processor)
		{
			if (elm.first == local.desired_processor)
			{
				cout << "The processor you pick out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getBudget(), local.desired_processor);
		cout << "Here is your new budget:  " << local.getNewBudget() << endl;
	}
	else
	{
		cout << "Brand not available!" << endl;
	}

	originalLocal = local;
}

