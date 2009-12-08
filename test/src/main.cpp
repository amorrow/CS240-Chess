/* test main */

#include "Bishop.h"
#include "King.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	if (!Bishop::Test(cout))
		cout << "Bishop failed." << endl;
	if (!King::Test(cout))
		cout << "King failed." << endl;
	return 0;
}

