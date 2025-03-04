#include <iostream>
#include <chrono>
#include <thread>
#include <string>

using namespace std;

int main()
{
	float SITime;
	float EPTTime;
	int UserOption;
	float UserInputSI;
	float OutputEPT;

	//User Input his choice of conversion

	cout << "Select Unit to Convert" << endl;
	cout << "1 > Second" << endl;
	cout << "2 > Minute" << endl;
	cout << "3 > Hour" << endl;
	cout << "4 > Day" << endl;
	cout << "5 > Year" << endl;
	cout << "> ";
	cin >> UserOption;

	//Seconds
	if (UserOption == 1) {
		cout << "Please Input Seconds Here:" << endl;
		cout << "> ";
		cin >> UserInputSI;

		OutputEPT = UserInputSI * 2.91;
		cout << "Universal Standard Time: " << " " << OutputEPT << " " << "EPT" << endl;
		this_thread::sleep_for(chrono::seconds(3600));
		return 0;
	} //Minutes
	else if (UserOption == 2) {
		cout << "Please Input Minutes Here:" << endl;
		cout << "> ";
		cin >> UserInputSI;

		OutputEPT = (UserInputSI * 60.0) / 174.6;
		cout << "Universal Standard Time: " << " " << OutputEPT << " " << "EPT Minutes" << endl;
		this_thread::sleep_for(chrono::seconds(3600));
		return 0;
	} //Hours
	else if (UserOption == 3) {
		cout << "Please Input Hours Here:" << endl;
		cout << "> ";
		cin >> UserInputSI;

		OutputEPT = (UserInputSI * 3600.0) / 10476.0;
		cout << "Universal Standard Time: " << " " << OutputEPT << " " << "EPT Hours" << endl;
		this_thread::sleep_for(chrono::seconds(3600));
		return 0;
	} // Days
	else if (UserOption == 4) {
		cout << "Please Input Days Here:" << endl;
		cout << "> ";
		cin >> UserInputSI;

		OutputEPT = (UserInputSI * 86400.0) / 251424.0;
		cout << "Universal Standard Time: " << " " << OutputEPT << " " << "EPT Days" << endl;
		this_thread::sleep_for(chrono::seconds(3600));
		return 0;
	} // Years
	else if (UserOption == 5) {
		cout << "Please Input Years Here:" << endl;
		cout << "> ";
		cin >> UserInputSI;

		OutputEPT = (UserInputSI * 31556926) / 91799760.0;
		cout << "Universal Standard Time: " << " " << OutputEPT << " " << "EPT Years" << endl;
		this_thread::sleep_for(chrono::seconds(3600));
		return 0;
	}
}

