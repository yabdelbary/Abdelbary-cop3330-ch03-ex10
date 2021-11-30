#include <iostream>
#include "std_lib_facilities.h"

int main()
{
	string operation;
    
	double val1 = 0;
	double val2 = 0;
	
    
    cout << "Enter an operation *, /, +, -followed by two numerical values: ";
	cin >> operation >> val1 >> val2;
	double result = 0;
	
    
    if (operation=="+")
		result = val1+val2;
	else if (operation=="-")
		result = val1-val2;
	else if (operation=="*")
		result = val1*val2;
	else if (operation=="/") {
		if (val2==0) error("Cannot divide by 0.");
		result = val1/val2;
	}
	else error("Invalid operator! ",operation);
	cout << "The answer is: " << result <<'\n';
	
}