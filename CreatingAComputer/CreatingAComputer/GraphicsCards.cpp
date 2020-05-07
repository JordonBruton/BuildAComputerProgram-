#include "GraphicsCards.h"
#include "unordered_map"
#include <iostream>
#include "Processors.h"
#include "LocalVariables.h"
using namespace std;

void GraphicsCards::findingGPU(LocalVariables& originalLocal)
{
	unordered_map<double, string> AsusGpu{};
	unordered_map<double, string> EvgaGPU{};
	LocalVariables local;

	local = originalLocal;
	
	AsusGpu = {
		{99.99, "Asus AREZ RX 560 O2G OC Edition GDDR5 DP HMI DVI"},
		{119.78, "R7240-2GD3-L - Grafikkarten - Radeon R7 240"},
		{229.99, "ASUS 8GB ROG Strix Radeon RX 5500 XT Graphics Card, Black"},
		{300.61, "ASUS ROG Strix Radeon RX 590 8G Gaming GDDR5 DP HDMI DVI VR Ready"},
		{378.99, "ASUS RX5700-8GB HDMI PCI Express 4.0 x16 8GB Video"},
		{419.99, "ASUS 8GB TUF Strix Radeon RX 5700 OC Edition Graphic Cards, Black"}
	};

	EvgaGPU = {
		{54.99, "EVGA GeForce GT710 2GB"},
		{89.99, "EVGA GeForce GT 1030 DDR4, 2GB SDDR4"},
		{229.99, "EVGA GeForce GTX 1660 SUPER BLACK GAMING, KR, 6GB, Single Fan"},
		{299.99, "EVGA GeForce GTX 1660 Ti XC ULTRA BLACK GAMING, 6GB GDDR6, Dual HDB Fans"},
		{349.99, "EVGA GeForce RTX 2060 GAMING, 6GB GDDR6, HDB Fan"},
		{499.99, "EVGA GeForce RTX 2070 SUPER BLACK GAMING, 8GB GDDR6"},
		{729.99, "EVGA GeForce RTX 2080 SUPER GAMING, 8GB GDDR6, RGB LED Logo, Metal Backplate"},
		{1099.99, "EVGA GeForce RTX 2080 Ti BLACK EDITION GAMING, 11GB GDDR6, Dual HDB Fans, RGB LED, Metal Backplate"}
	};

	cout << "What brand of GPU do you want to use: EVGA & ASUS" << endl;
	cin >> local.desired_gpu_brand;

	cout << endl;

	if (local.desired_gpu_brand == "EVGA" || local.desired_gpu_brand == "evga")
	{
		cout << "Here are your EVGA options: " << endl;
		
		for (auto& elm : EvgaGPU)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "To get the desired GPU enter the amount it cost" << endl;
		cin >> local.desired_gpu;

		for (auto& elm : EvgaGPU)
		{
			if (elm.first == local.desired_gpu)
			{
				cout << "The GPU you picked out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getNewBudget(), local.desired_gpu);
		cout << "Here is your new budget:  " << local.getNewBudget() << endl;
	}
	else if (local.desired_gpu_brand == "ASUS" || local.desired_gpu_brand == "asus")
	{
		cout << "Here are your ASUS options: " << endl;

		for (auto& elm : AsusGpu)
		{
			cout << "$" << elm.first << " " << elm.second << endl;
		}

		cout << "To get the desired GPU enter the amount it cost" << endl;
		cin >> local.desired_gpu;

		for (auto& elm : AsusGpu)
		{
			if (elm.first == local.desired_gpu)
			{
				cout << "The GPU you picked out is: " << elm.second << endl;

				local.final_pc.push_back(elm.second);
			}
		}

		local.setNewBudget(local.getNewBudget(), local.desired_gpu);
		cout << "Here is your new budget:  " << local.getNewBudget() << endl;

	}
	else
	{
		cout << "The brand you listed doesn't exist in this program!" << endl;
	}

	originalLocal = local;
}
