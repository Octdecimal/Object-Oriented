/*
1. 將string2接在string1後面
2. std::cin讀到空白時會停止，意味著空白後的字串會被視為另一筆資料，
   getline則是讀到換行字元('\n')時才停止
*/

#include <iostream>
using namespace std;

void LowerToUpper(char *);

int main(){
	char str1[100];
	char str2[100];

	cout << "Enter two strings: ";
	cin.getline(str1, 80, '\n');
	cin.getline(str2, 80, '\n');

	LowerToUpper(str1);
	LowerToUpper(str2);

	cout << str1 << "\n" << str2;

	return 0;
}

void LowerToUpper(char *str){
	int p;
	for(int i = 0; i < 80; i++){
		p = *str;
		if( p >= 97 && p <= 123){
		    *str -= 32;
		}
		str++;
	}
}