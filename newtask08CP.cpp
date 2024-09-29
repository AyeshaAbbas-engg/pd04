#include <iostream>
using namespace std;
void pet(int holidays);
main()
{

	int holidays;
	cout << "Enter holidays:";
	cin >> holidays;
	pet(holidays);
}

void pet(int holidays)
{
	int totaltime = 30000;
	int workingdays = 365 - holidays;
	int gametime = (totaltime - ((workingdays * 63) + (holidays * 127)));
	int hours = gametime / 60;
	int minute = gametime % 60;
	if (hours > 0)
	{
		cout << "Tom sleeps well\n";
		cout << hours << " hours and " << minute << " minutes less for play " << endl;
	}
	if (hours < 0)
	{
		cout << "Tom will run away\n";
		cout << (hours * (-1)) << " hours and " << (minute * (-1)) << " minutes for play " << endl;
	}
}