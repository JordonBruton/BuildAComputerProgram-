#include "MotherBoard.h"
#include <iostream>
#include <unordered_map>
#include "LocalVariables.h"
using namespace std;

void MotherBoard::findingMotherBoard(LocalVariables& originalLocal)
{
	unordered_map<double, string> asus_rog{};
	unordered_map<double, string> gigabyte{};
	LocalVariables local;

	local = originalLocal;

	asus_rog = {
		{289.99, "ASUS ROG Maximums XI Hero (Wifi) Z390 Gaming Motherboard"},
		{189.99, "ASUS ROG Strix Z390-H Gaming MotherBoard LGA1151 ATX DDR4 DP HDMI M.2 USB 3.1 Gen2 Gigabit LAN"},
		{154.99, "ASUS ROG STRIX B450-F Gaming AM$ AMD B450 SATA 6Gb/'s ATX AMD Motherboard"},
		{499.99, "ASUS ROG Strix X299-E Gaming II LGA 2066 Intel X299 SATA 6Gb/s ATX Intel Motherboard"}
	};

	gigabyte = {
		{72.99, "GIGABYTE B450M DS3H AM$ AMD B450 SATA 6Gb/s Micro ATX AMD Motherboard"},
		{129.99, "GIGABYTE Z390 UD LGA 1151 (300 Series) Intel Z390 SATA 6Gb/s ATX Intel Motherboard"},
		{239.99, "GIGABYTE X299 UD4 Pro LGA 2066 Intel X299 SATA 6Gb/s USB 3.1 ATX Intel Motherboard"},
		{325.44, "GIGABYTE Z390 DESIGNARE LGA 1151 (300 Series) Inel Z390 HDMI SATA 6Gb/s USB 3.1 ATX Intel Motherboard"}
	};

	cout << "What Motherboard brand do you want to use: Asus Rog or Gigabyte" << endl;
	cin >> local.desired_mobo_brand;

	if (local.desired_mobo_brand == "AsusRog" || local.desired_mobo_brand == "asusrog")
	{
		cout << "Here are your Asus Rog options: " << endl;
		for (auto& elm : asus_rog)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "To get the desired Tower enter the amount it cost" << endl;
		cin >> local.desired_mobo;
		for (auto& elm : asus_rog)
		{
			if (elm.first == local.desired_mobo)
			{
				cout << "The Tower you picked out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getNewBudget(), local.desired_mobo);
		cout << "Here is your new budget: " << local.getNewBudget() << endl;
	}
	else if (local.desired_mobo_brand == "Gigabyte" || local.desired_mobo_brand == "gigabyte")
	{
		cout << "Here are your Gigabyte options: " << endl;
		for (auto& elm : gigabyte)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "To get the desired Tower enter the amount it cost" << endl;
		cin >> local.desired_mobo;
		for (auto& elm : gigabyte)
		{
			if (elm.first == local.desired_mobo)
			{
				cout << "The Tower you picked out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getNewBudget(), local.desired_mobo);
		cout << "Here is yoru new budget: " << local.getNewBudget() << endl;
	}
	else
	{
		cout << "Tower brand does not exist in this program!" << endl;
	}

	originalLocal = local;
}