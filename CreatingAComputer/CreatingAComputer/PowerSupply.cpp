#include "PowerSupply.h"
#include "GraphicsCards.h"
#include "Processors.h"
#include <iostream>
using namespace std;

void PowerSupply::findingPowerSupply(LocalVariables& originalLocal)
{
	unordered_map<double, string> power_evga{};
	unordered_map<double, string> power_corsair{};
	LocalVariables local;

	local = originalLocal;

	power_evga = {
		{64.99, "EVGA 750 N1, 750W, Power Supply"},
		{129.99, "EVGA 850 B5, 80 Plus BRONZE 850W, Fully Modular"},
		{289.99, "EVGA SuperNOVA 1300 G2, 80+ GOLD 1300W, Fully Modular"},
		{229.99, "EVGA SuperNOVA 1000 G2, 80+ GOLD 1000W, Fully Modular"},
		{319.99, "EVGA SuperNOVA 1200 P2, 80+ PLATINUM 1200W, Fully Modular"},
		{469.99, "EVGA SuperNOVA 1600 P2, 80+ PLATINUM 1600W, Fully Modular"}
	};

	power_corsair = {
		{49.99, "VS Seires VS450 - 450 Watt 80 PLUS White Certified"},
		{109.99, "TX-M Series TX750M - 750 Watt 80 Plus Gold Certified"},
		{154.99, "HX Series HX750 - 750 Watt 80 PLUS PLATINUM Certified, fully Modular"},
		{239.99, "HXi Series HX1000i High-Performance ATX Power Supply - 1000 Watt 80 plus PLATINUM Certified"},
		{254.99, "AX Series AX7850 - 850 Watt PLUS Titanium Certified, Fully Modular"},
		{409.99, "AX1200i Digital ATX Power Supply - 1200 Watt 80 PLUS, PLATINUM Certified, Fully Modular"}
	};

	cout << "What Power Supply brand do you want to use: EVGA or Corsair: " << endl;
	cin >> local.desired_ps_brand;

	if (local.desired_ps_brand == "EVGA" || local.desired_ps_brand == "evga")
	{
		cout << "Here are you EVGA options: " << endl;
		for (auto& elm : power_evga)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "To get the your desired Power Supply enter the amount it cost" << endl;
		cin >> local.desired_ps;
		for (auto& elm : power_evga)
		{
			if (elm.first == local.desired_ps)
			{
				cout << "The Power Supply you picked out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getNewBudget(), local.desired_ps);
		cout << "Here is your new budget: " << local.getNewBudget() << endl;
	}
	else if (local.desired_ps_brand == "Corsair" || local.desired_ps_brand == "corsair")
	{
		cout << "Here are you Corsair options: " << endl;
		for (auto& elm : power_corsair)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "To get the your desired Power Supply enter the amount it cost" << endl;
		cin >> local.desired_ps;
		for (auto& elm : power_corsair)
		{
			if (elm.first == local.desired_ps)
			{
				cout << "The Power Supply you picked out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getNewBudget(), local.desired_ps);
		cout << "Here is your new budget: " << local.getNewBudget() << endl;
	}
	else
	{
		cout << "Power supply brand does not exist in this program" << endl;
	}

	originalLocal = local;

};