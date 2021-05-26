#include <cmath>    // math
#include <cstdlib>  // std lib
#include <ctime>    // time funcs
#include <iostream> // read write data
#include <limits>   // max min
#include <numeric>  // value sequences
#include <sstream>  // stringstream
#include <string>   // strings
#include <vector>   // vectors

#include "CoCoConfig.h"

#define EXIT_SUCCESS 0

using namespace std; 

int main() { // int argc, char **argv
	cout << PROJECT_NAME << " - Ver. " << PROJECT_VER << endl;
	
	string myName = "world";
	cout << "hello " << myName << endl;
	
	return EXIT_SUCCESS;
}