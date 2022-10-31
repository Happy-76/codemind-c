// C++ program to check if a given
// year is leap year or not
#include <bits/stdc++.h>
using namespace std;

bool checkYear(int year)
{
	if (year % 400 == 0)
		return true;

	if (year % 100 == 0)
		return false;

	if (year % 4 == 0)
		return true;
	return false;
}


int main()
{
	int year;
    cin>>year;
    if(checkYear(year))
    cout<<"True";
    else
    cout<<"False";
	return 0;
}
