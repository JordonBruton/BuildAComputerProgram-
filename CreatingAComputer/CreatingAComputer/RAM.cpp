#include "RAM.h"
#include "Processors.h"
#include <iostream>
using namespace std;
void RAM::findingRam(LocalVariables& orignialLocal)
{
	unordered_map<double, string> corsair{};
	unordered_map<double, string> g_skill{};
	LocalVariables local;

	local = orignialLocal;

	corsair = {
		{23.99, "CORSAIR ValueSelect 4GB 240-Pin DDR3 SDRAM DDR3 x 1"},
		{28.99, "CORSAIR Vengeance LPX 4GB 288-Pin DDR4 SDRAM DDR4 2400 x 1"},
		{39.99, "CORSAIR VENGEANCE RGB PRO Light x 2"},
		{72.99, "CORSAIR ValueSelect 16GB 288-Pin DDR4 SDRAM DDR4 2133 x 1"},
		{74.99, "CORSAIR Vengeance LPX 16GB (2 x 8GB) 288-Pin DDR4 SDRAM DDR4 3200"},
		{92.99, "CORSAIR Vengeance RGB Pro 16GB (2 x 8GB) 288-Pin DDR4 DRAM 3200"},
		{159.99, "CORSAIR Vengeance LPX 32GB (2 x 16GB) 288-Pin DDR4 SDRAM DDR4 3200"},
		{174.99, "CORSAIR Vengenace RGB Pro 32GB (2 x 16GB) 288-Pin DDR4 SDRAM DDR4 3200"}
		
	};
	g_skill = {
		{32.99, "G.SKILL Aegis 8GB 288-Pin DDR4 SDRAM 3000 x 1"},
		{45.99, "G.SKILL RipJaws X Series 8GB (2 x 4GB) 240-Pin DDR3 SDRAM DDR3 1600"},
		{72.99, "G.SKILL RipJaws V Series 16GB (2 x 8GB) 288-Pin DDR4 SDRAM DDR4 3200"},
		{93.99, "G.SKILL TridentZ RGB Series 16GB (2 x 8GB) 288-Pin DDR4 SDRAM DDR4 3200"},
		{153.99, "G.SKILL RipJaws V series 32GB (2 x 16GB) 288-Pin DDR4 SDRAM DDR4 3600"},
		{184.99, "G.SKILL Trident Z Nego (For AMD Ryzen) Seires 32GB (2 x 16GB) 288-Pin RGB DDR4 SDRAM DDR4 3600"}
	};

	cout << "What Ram brand do you want to use: Corsair or G.skill " << endl;
	cin >> local.desired_ram_brand;

	cout << endl;

	if (local.desired_ram_brand == "Corsair" || local.desired_ram_brand == "corsair")
	{
		cout << "Here are your Corsair Optiosn: " << endl;
		for (auto& elm : corsair)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "To get your desired Ram enter the amount it cost" << endl;
		cin >> local.desired_ram;
		
		for (auto& elm : corsair)
		{
			if (elm.first == local.desired_ram)
			{
				cout << "The Ram you picked out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getNewBudget(), local.desired_ram);
		cout << "Here is your new budget: " << local.getNewBudget() << endl;
	}
	else if (local.desired_ram_brand == "G.skill" || local.desired_ram_brand == "g.skill")
	{
		cout << "Here are your G.skill Options: " << endl;
		for (auto& elm : g_skill)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}
		
		cout << "To get your desired Ram enter the amount it cost" << endl;
		cin >> local.desired_ram;

		for (auto& elm : g_skill)
		{
			if (elm.first == local.desired_ram)
			{
				cout << "The Ram you picked out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getNewBudget(), local.desired_ram);
		cout << "Here is your new budget: " << local.getNewBudget() << endl;
	}
	else
	{
		cout << "This ram brand doesn't exist in this program!" << endl;
		cout << "Enter one of the following brands: Corsair or G.skill" << endl;
		cin >> local.desired_ram_brand;
	}

	orignialLocal = local;
}
