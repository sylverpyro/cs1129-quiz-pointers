//-------------------------------------------------------------------
// File		:pointerQuiz.C
// Author	:Michael Benson
// Course	:CS1129
// Date		:March 14, 2006
//
//-------------------------------------------------------------------

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int *a1, *a2, *a3, sizeA1, sizeA2, sizeA3;

	cout << "Enter size of list one: ";
	cin >> sizeA1;
	cout << endl;
	
	cout << "Enter size of list two: ";
	cin >> sizeA2;
	cout << endl;

	a1 = new int[sizeA1];
	a2 = new int[sizeA2];

	cout << "Enter " << sizeA1;
	cout << " integers in ascending order : ";

	for ( int i = 0; i < sizeA1; i++)
	{
		cin >> *(a1+i);
	}

	cout << endl;
	
	cout << "Enter " << sizeA2;
	cout << " integers in ascending order : ";
	
	for ( int i = 0; i < sizeA2; i++)
	{
		cin >> *(a2+i);
	}
	
	cout << endl;
	
	sizeA3 = sizeA1 + sizeA2;
	a3 = new int[sizeA3];
	
	for ( int i = 0, a1i = 0, a2i = 0; i < sizeA3; i++ )
	{
		if ( a1i < sizeA1 && a2i < sizeA2 )
		{
			if ( *(a1+a1i) < *(a2+a2i) )
			{
				*(a3+i) = *(a1+a1i);
				a1i++;
			}
			else
			{
				*(a3+i) = *(a2+a2i);
				a2i++;
			}
		}

		else if ( a1i = sizeA1 )
		{
			*(a3+i) = *(a2+a2i);
			a2i++;
		}

		else if ( a2i = sizeA2 )
		{
			*(a3+i) = *(a1+a1i);
			a1i++;
		}
	}

	for ( int i = 0; i < sizeA3; i++ )
	{
		cout << *(a3+i) << " ";
	}

	cout << endl;
}
