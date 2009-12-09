/* test main */

#include "Bishop.h"
#include "King.h"
#include "Knight.h"
#include "Pawn.h"
#include "Queen.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	if (!Bishop::Test(cout))
		cout << "Bishop failed." << endl;
	if (!King::Test(cout))
		cout << "King failed." << endl;
	if (!Knight::Test(cout))
		cout << "Knight failed." << endl;
	if (!Pawn::Test(cout))
		cout << "Pawn failed." << endl;
	if (!Queen::Test(cout))
		cout << "Queen failed." << endl;

	return 0;
}

