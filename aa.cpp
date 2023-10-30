

#include <iostream>
using namespace std;

void LowerToUpper(char *, const char *);

int main(){
	char str1[100];
	char str2[100];

	cout << "Enter two strings: ";
	cin >> str1 >> str2;

	LowerToUpper(str1, str2);

	cout << str1 << "\n" << str2;

	return 0;
}

void LowerToUpper(char *s1, const char *s2){
	while( *s1 != '\0'){
		s1++;
	}
	for(; (*s1 = *s2); s1++, s2++){;}
}