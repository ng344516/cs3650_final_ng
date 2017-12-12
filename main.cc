/* Nicholas Gill
 * CS3650 Final
 * Main function
 */

#include <iostream>
#include <string>

using namespace std;

int countLine(string pName);
int countChar(string pName);

//! Main function
int main() {

	string y = "Ohio University"; //!< Test string
	string x = "Athens"; //!< Another test string
	countLine(y);
	countChar(x);
	return 0;

}


//! \fn countLine
//! \brief counts number of lines in a string
//! \param string pName
//! \var int count
int countLine(string pName) {
	int count = 1; //!< Holds the count for number of lines
	for(int i = 0; i < pName.length(); i++) {
		if(pName[i] == '\n')
			count++;
	}
	cout << count << " Lines\n";
	return count;
}

//! \fn countChar
//! \brief counts number of characters in a string
//! \param string pName
//! \var int count
int countChar(string pName) {
	int count = 0; //!< Holds the count for number of characters
	for(int i = 0; i < pName.length(); i++) {
		count++;
	}
	cout << count << " Characters\n";
	return count;
}
