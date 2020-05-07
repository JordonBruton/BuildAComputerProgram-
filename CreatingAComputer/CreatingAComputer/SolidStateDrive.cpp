#include "SolidStateDrive.h"
#include <iostream>
#include <unordered_map>

using namespace std;

void SolidStateDrive::findingSolidStateDrive(LocalVariables& originalLocal)
{
	unordered_map<double, string> intel{};
	unordered_map<double, string> samsung{};
	LocalVariables local;

	local = originalLocal;

	intel = {
		{62.99, "Intel 660p Series M.2 2280 1TB PCIe NVMe 3.0 x4 3D2, QlC Internal Solid State Drive"},
		{69.99, "Intel 545s 2.5 128GB SATA III 64-Layer 3D NAND TLC Internal Solid State Drive"},
		{72.99, "Intel 660p Series M.2 x4 3D2, QLC Internal Solid State Drive"},
		{102.99, "Intel 660p Series M.2 2280 256GB PCIe NVM3 3.0 x4 3D2, QLC Internal Solid State Drive"},
		{124.99, "Intel 660p Series M.2 2280 1TB PCIe NVM3 3.0 x4 3D2, QLC Internal Solid State Drive"},
		{154.85, "Intel 545s 2.5 512GB SATA III 64-Layer 3D NAND TLC Internal Solid State Drive"},
		{398.00, "Intel 545s 2.5 1TB SATA III 64-Layer 3D NAND TLC Internal Solid State Drive"},
	};

	samsung = {
		{82.86, "SAMSUNG 970 EVO M.2 2280 250GB PCIe Gen3. X4, NVMe 1.3 V-NAND 3-bit MLC Intern Solid State Drive"},
		{87.74, "SAMSUNG 860 EVO Series 2.5 500GB SATA III V-NAND 3-bit MLC Internal Solid State Drive"},
		{100.99, "SAMSUNG 970 EVO M.2 2280 500GB PCIe Gen3. X4, NVMe 1.3 V-NAND 3-bit MLC Intern Solid State Drive"},
		{165.74, "SAMSUNG 860 EVO Series 2.5 1TB SATA III V-NAND 3-bit MLC Internal Solid State Drive"},
		{182.99, "SAMSUNG 860 EVO Series 2.5 1TB SATA III V-NAND 3-bit MLC Internal Solid State Drive"}
	};

	cout << "Pick out a processor brand: Intel or Samsung" << endl;
	cin >> local.desired_ssd_brand;


	if (local.desired_ssd_brand == "Intel" || local.desired_ssd_brand == "intel")
	{
		cout << "Here are AMD options : " << endl;

		for (auto& elm : intel)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "Enter the amount of the desired processor" << endl;
		cin >> local.desired_ssd;
		for (auto& elm : intel)
		{
			if (elm.first == local.desired_ssd)
			{
				cout << "The processor you pick out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getBudget(), local.desired_ssd);
		cout << "Here is your new budget:  " << local.getNewBudget() << endl;

	}
	else if (local.desired_ssd_brand == "Samsung" || local.desired_ssd_brand == "samsung")
	{
		cout << "Here are your Samsung options: " << endl;

		for (auto& elm : samsung)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "What proccesor do you want?" << endl;
		cout << "	Enter the amount of the desired processor" << endl;
		cin >> local.desired_ssd;
		for (auto& elm : samsung)
		{
			if (elm.first == local.desired_ssd)
			{
				cout << "The processor you pick out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getBudget(), local.desired_ssd);
		cout << "Here is how much you have left :  " << local.getNewBudget() << endl;
	}
	else
	{
		cout << "Brand not available!" << endl;
	}

	originalLocal = local;
}
