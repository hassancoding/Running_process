#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>

using namespace std;

int main() 
{
	string pid;
	system("tasklist");
    // Prompt the user to enter the PID
	cout << "Enter the PID to terminate the process from the list: ";
    cin >> pid;

    // Construct the taskkill command
	string command = "taskkill /F /PID " + pid;

	// Execute the command and check the result
	int result = system(command.c_str());
	if (result == 0) 
	{
		cout << "Process with PID " << pid << " was terminated successfully.\n";
	} 
	else 
	{
		cout << "Failed to terminate the process. Ensure the PID is correct and you have the necessary permissions.\n";
	}
	getche();
	return 0;
}