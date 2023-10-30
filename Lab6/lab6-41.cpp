#include <iostream>
using namespace std;

int gcd(int, int);

int main(){
	int x, y;
	while(cin >> x >> y){
		cout << "gcd of " << x << " and " << y << " is " << gcd(x, y) << endl;
	}
	return 0;
}

int gcd(int x, int y){
	if(x < y){
		swap(x, y);
	}
	if(!y){
		return x;
	}else{
		gcd(y, x%y);
	}
}