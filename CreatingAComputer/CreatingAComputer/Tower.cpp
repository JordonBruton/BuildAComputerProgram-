#include "Tower.h"
#include <unordered_map>
using namespace std;

void Tower::findingTower(LocalVariables& originalLocal)
{
	unordered_map<double, string> cool_master{};
	unordered_map<double, string> corsair{};
	LocalVariables local;

	local = originalLocal;

	cool_master = {
		{49.99, "Cooler Master MasterBox lite 3.1 TG Micro ATX Tower w/ FroNT dARK Mirror Panel"},
		{59.99, "Cooler Master MasterBox MB311L ARGB airflow Micro ATX Tower /w Fine Mesh Front Panel"},
		{89.99, "Cooler Master MasterBox MB520 RGB ATX Mid-Tower w/ Front DarkMirror Panel"},
		{111.00, "Cooler Master MasterBox MB311L ARGB Airflow Micro ATX tower /w Fine Mesh front & side Panel"},
		{128.99, "Cooler Master MasterBox MB530P ATX Mid-Tower w/ 3 x tempered Glass panel"},
		{189.99, "Cooler Master MasterBox Pro 5 RGB ATX Mid-tower w/ Front DarkMirror panel, Tempered Glass side"}
	};
	corsair = {
		{59.96, "Carbide Series 88R, Micro ATX Mid-Tower"},
		{72.22, "Corsair Carbide Seires, /w Black/Red Tempered glass ATX Mid-Tower"},
		{79.99, "Corsair Carbide Series /w Black Steel / Plastic / Tempered Glass, ATX Mid-Tower"},
		{87.22, "Corsair Carbide Series /w White Steel / Plastic / Acrylic Window Side Panel, ATX Mid-Tower"},
		{108.99, "Corsair iCUE 220T RGB AirFlow /w Black Steel / Plastic / Tempered Glass, ATX Mid-Tower"},
		{121.72, "Corsair iCUE 220T RGB AirFlow /w White Steel / Plastic / Tempered Glass, ATX Mid-Tower"},
		{176.06, "CORSAIR Carbide Series RGB Tempered Glass Mid-Tower ATX"}
	};

	cout << "What Tower brand do you want to use: Cool Master or Corsair" << endl;
	cin >> local.desired_tower_brand;

	if (local.desired_tower_brand == "Cool Master" || local.desired_tower_brand == "cool master")
	{
		cout << "Here are your Cool Master options: " << endl;
		for (auto& elm : cool_master)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "To get the desired Tower enter the amount it cost" << endl;
		cin >> local.desired_tower;
		for (auto& elm : cool_master)
		{
			if (elm.first == local.desired_tower)
			{
				cout << "The Tower you picked out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getNewBudget(), local.desired_tower);
		cout << "Here is yoru new budget: " << local.getNewBudget() << endl;
	}
	else if (local.desired_tower_brand == "Corsair" || local.desired_tower_brand == "corsair")
	{
		cout << "Here are your Corsair options: " << endl;
		for (auto& elm : corsair)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "To get the desired Tower enter the amount it cost" << endl;
		cin >> local.desired_tower;
		for (auto& elm : corsair)
		{
			if (elm.first == local.desired_tower)
			{
				cout << "The Tower you picked out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getNewBudget(), local.desired_tower);
		cout << "Here is yoru new budget: " << local.getNewBudget() << endl;
	}
	else
	{
		cout << "Tower brand does not exist in this program!" << endl;
	}

	originalLocal = local;
}