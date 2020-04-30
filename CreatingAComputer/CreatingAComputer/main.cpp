#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// 4/28/2020 - 4/29/2020
	// To Do List:
		// Prompting users what their options are DONE
			// Already existing build DONE
			// Create your own pc 
		// Create basic builds with different price ranges 
		// Creating data strucutres for:
			// CPU & GPU

class PreExistingBuilds
{
public:

	// Low Tier pre-existing build
	void CheapestBuild()
	{
		vector<string> CheapParts = {
			"CPU: AMD Ryzen 5 2600 6-Core Processor ($167.99)",
			"GPU: XFX RX 570 4GB GDDR5 RS xxx Edition($131.32)",
			"RAM(Memory): Patriot Viper steel DDR4 16GB (2 x 8GB) 3000MHz ($71.99)",
			"HDD/SSD: ADATA SU635 240GB ($34.99)",
			"PSU(power supply): Apevia ATX-PR600W Prestige 600W 80+ Gold Certified ($49.99)",
			"MOBO(Motherboard): MSI B450M PRO-M2 Max ($74.99)",
			"Case: Aerocool DS230 Window Black Case ($69.85)"
		};

		for (int i = 0; i < CheapParts.size(); i++)
		{
			cout << CheapParts[i] << endl;
		}

		cout << "This is currently: $601.12" << endl;
		cout << "Here is also the link to how to build it: " 
			 <<	"https://www.youtube.com/watch?time_continue=97&v=TOD3Sm9Ac24&feature=emb_logo" << endl;

		cout << endl;
	}
	// Mid tier pre-existing build
	void MidTierBuild()
	{
		vector<string> MidParts = {
			"CPU: AMD Ryzen 5 3600 3.6 GHz 6-Core Processor ($172.76)",
			"GPU: ASRock Radeon RX 5700 ($329.99)",
			"RAM: G.Skill Sniper X 16GB (2 x 8) DDR4 - 3600 Memory ($78.99)",
			"HDD/SSD: CrucialP1 500GB NVMe PCIe M.2 SSD ($68.95)",
			"PSU: Corsair CX 650W (2017) 80+ Bronze Power Supply ($90.44)",
			"MOBO: MSI B450 TOMAHAWK ATX AM4 Motherboard ($209.99)",
			"Case: NZXT H500 Mid Tower Computer Case ($99.99)"
		};

		for (int i = 0; i < MidParts.size(); i++)
		{
			cout << MidParts[i] << endl;
		}
		
		
		cout << "This is currently: $1051.11" << endl;
		cout << "Here is also the link to how to build it: "
			 << "https://www.youtube.com/watch?v=zUcY5Yfij30" << endl;

		cout << endl;
	} 
	// High tier pre-existing build 
	void HighTierBuild()
	{
		vector<string> HighParts = {
			"CPU: AMD Ryzen 7 3700x ($294.14)",
			"GPU: EVGA RTX 2080 Super Black Gaming ($699.99)",
			"RAM(Memory): G. SKILL Ripjaws V 2 x 8 GB DDR4 3600 ($84.99)",
			"HDD: Seagate Barracuda 2TB ($64.99)",
			"SSD: XPG Gammix S5 256GB PCIe 3D ($121.30)",
			"PSU(power supply): EVGA 650W GQ ($120.67)",
			"MOBO(Motherboard): ASUS ROG Strix B450-F Gaming Motherboard ($129.99)",
			"Case: Phanteks PH-EC416PTG_BW Eclipse P400 Steel ATX Mid Tower($119.99)",
			"Water CPU Cooling(optional): ARCTIC Liquid Freezer II 240 - Multi Compatible ($84.99)"

		};

		for (int i = 0; i < HighParts.size(); i++)
		{
			cout << HighParts[i] << endl;
		}

		cout << "This is currently: $1721.05" << endl;
		cout << "Here is also the link to how to build it: "
			<< "https://www.youtube.com/watch?v=2vb9IAQ6bNo" << endl;

		cout << endl;
	}

};


int main()
{
	// Local variables 
	string option;
	string pre_existing = "p";
	string create_new = "c";
	string answer;

	cout << "Welcome to the PC Creation Program!" << endl;
	cout << endl;
	cout << "Options: Pre-existing PC build or Create your own PC" << endl;
	cout << " Enter p for pre-existing build" << endl;
	cout << " Enter c to create your own PC" << endl;
	cin >> option;

	while (option == "p" || "c")
	{

		if (option == pre_existing)
		{
			cout << "Indicate what tier of computer, 1 being the cheapest and 3 being the most expensive and best quality" << endl;
			cout << "Enter '1' for tier 1" << endl;
			cout << "Enter '2' for tier 2" << endl;
			cout << "Enter '3' for tier 3" << endl;
			cin >> answer;

			if (answer == "1")
			{
				PreExistingBuilds cheap;
				cheap.CheapestBuild();
				cout << "If your happy with your results enter exit" << endl;
				cout << "If you want to change your tier for a pre-existing build enter p" << endl;
				cout << "If you want to create your own PC enter c" << endl;
				cin >> option;
				if (option == "exit")
				{
					return 0;
				}
			}
			else if (answer == "2")
			{
				PreExistingBuilds mid;
				mid.MidTierBuild();
				cout << "If your happy with your results enter exit" << endl;
				cout << "If you want to change your tier for a pre-existing build enter p" << endl;
				cout << "If you want to create your own PC enter c" << endl;
				cin >> option;
				if (option == "exit")
				{
					return 0;
				}
			}
			else if (answer == "3")
			{
				PreExistingBuilds high;
				high.HighTierBuild();
				cout << "If your happy with your results enter exit" << endl;
				cout << "If you want to change your tier for a pre-existing build enter p" << endl;
				cout << "If you want to create your own PC enter c" << endl;
				cin >> option;
				if (option == "exit")
				{
					return 0;
				}
			}

		}
	}
	
	
	
	



	return EXIT_SUCCESS;
}