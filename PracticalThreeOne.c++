/* 3.1 Write a function which will take a string as a parameter and 
will remove the blank spaces before and after a string.*/

#include <iostream>
using namespace std;

void removeSpaces(char *str){
	int count = 0;
	for (int i = 0; str[i]; i++)
		if (str[i] != ' ')
			str[count++] = str[i]; 
	str[count] = '\0';
}

int main()
{
	char str[40] ;
	cout<< "Enter something to remove spaces :"<<endl;
	gets(str);
	cout << "After removing spaces :"<<endl;
	removeSpaces(str);
	cout << str;
	return 0;
}