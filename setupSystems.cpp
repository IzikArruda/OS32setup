#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream fileStream;
	fileStream.open("OS32\\systems\\OS32.config");
	fileStream << "" << endl;
	fileStream.close();

	fileStream.open("OS32\\systems\\file-property.log");
	fileStream << "" << endl;
	fileStream.close();

	fileStream.open("OS32\\systems\\command-list.txt");
	fileStream <<
			"helpme\n"
			"fcreate\n"
			"fread\n"
			"fwrite\n"
			"dcreate\n"
			"currdir\n"
			"listitems\n"
			"chper" << endl;
	fileStream.close();

	fileStream.open("OS32\\systems\\command-help.txt");
	fileStream <<
			"helpme \t\t\t\t: To display the set of commands that are available\n"
			"fcreate <file name> \t\t: To create a file\n"
			"fread <file name> \t\t: To read from a file that has read permission, or else display error\n"
			"fwrite <file name> \t\t: To write to a file that has read-write permission or else display error\n"
			"dcreate <directory name> \t: To create a new directory\n"
			"currdir \t\t\t: To display the name of the current directory\n"
			"listitems \t\t\t: To display the names of all the files and directories within the current directory\n"
			"chper <file name> <permission> \t: This changes the permission type for the file" << endl;
	fileStream.close();

	return 0;
}
