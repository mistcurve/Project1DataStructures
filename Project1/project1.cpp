#include <iostream>
#include <iomanip>

#include "sequence.h"

using namespace std;

void testCopyConstructor(Sequence);

int main()
{
	try
	{
		{
			Sequence data(4);
			data[0] = 100;
			data[1] = 200;
			cout << "before calling testCopyConstructor: " << data.at(0) << endl;
			testCopyConstructor(data);
			cout << "after calling testCopyConstructor: " << data.at(0) << endl;
		}

		{
			Sequence data( 4 );
			data[5] = 100;
		}
	}
	catch (exception& e)
	{
		cout << "Exception: " << e.what() << endl;
	}
}

void testCopyConstructor(Sequence s)
{
	cout << "inside testCopyConstructor: " << s.at(0) << endl;
	s[0] = -1;
}