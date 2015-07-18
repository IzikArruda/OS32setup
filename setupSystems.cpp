#include <iostream>
#include <fstream>

#if defined(_WIN32)
	#include <windows.h>
#elif defined(__APPLE__)
	#include <sys/stat.h>
#endif

using namespace std;
int main() {
	//create a stream to output the files' contents
	ofstream fileCreation;

	//directory creation for windows
	#if defined _WIN32
		cout << "windows" << endl;
		CreateDirectory("OS32", NULL);
		CreateDirectory("OS32\\systems", NULL);
		CreateDirectory("OS32\\systems\\account", NULL);
	//directory creation for apple
	#elif defined __APPLE__
		cout << "apple" << endl;
		mkdir("OS32", 0777);
		mkdir("OS32\\systems", 0777);
		mkdir("OS32\\systems\\account", 0777);
	#endif

	//also works for windows?
	//#include <direct.h>
	//mkdir("OS32");
	//mkdir("OS32\\systems");
	//mkdir("OS32\\systems\\account");



	//configuration file holding memory data
	fileCreation.open("OS32\\systems\\OS32.config");
	fileCreation << "" << endl;
	fileCreation.close();

	//file to hold the list of file properties
	fileCreation.open("OS32\\systems\\file-property.log");
	fileCreation << "" << endl;
	fileCreation.close();

	//list of commands the user can use
	fileCreation.open("OS32\\systems\\command-list.txt");
	fileCreation <<
			"helpme\n"
			"fcreate\n"
			"fread\n"
			"fwrite\n"
			"dcreate\n"
			"currdir\n"
			"listitems\n"
			"chper" << endl;
	fileCreation.close();

	//description of all commands, possibly run when helpme is called
	fileCreation.open("OS32\\systems\\command-help.txt");
	fileCreation <<
			"helpme \t\t\t\t: To display the set of commands that are available\n"
			"fcreate <file name> \t\t: To create a file\n"
			"fread <file name> \t\t: To read from a file that has read permission, or else display error\n"
			"fwrite <file name> \t\t: To write to a file that has read-write permission or else display error\n"
			"dcreate <directory name> \t: To create a new directory\n"
			"currdir \t\t\t: To display the name of the current directory\n"
			"listitems \t\t\t: To display the names of all the files and directories within the current directory\n"
			"chper <file name> <permission> \t: This changes the permission type for the file" << endl;
	fileCreation.close();

	//all user accounts information
	fileCreation.open("OS32\\systems\\account\\user-accounts.txt");
	fileCreation << "" << endl;
	fileCreation.close();

	//current logged in user information
	fileCreation.open("OS32\\systems\\account\\current-login.txt");
	fileCreation << "" << endl;
	fileCreation.close();

	//logged login timestamps
	fileCreation.open("OS32\\systems\\account\\login-history.txt");
	fileCreation << "" << endl;
	fileCreation.close();

	cout << "done" << endl;

	return 0;
}
