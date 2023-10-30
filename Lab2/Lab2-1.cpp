#include<iostream>
using namespace std;
int main(){
	int x[3], max, min;
	float ave;
	cin >> x[0] >> x[1] >> x[2];
	ave = (float)(x[0]+x[1]+x[2])/3;
	max = x[0];
	min = x[0];
	for(int i = 1; i < 3; i++) {
		if(x[i] > max){
			max = x[i];
		}
		if(x[i] < min){
			min = x[i];
		}
	}
	cout << "\n\nInput three different integers: " << x[0] << " " << x[1] << " " << x[2] << 
	"\nSum is " << x[0] + x[1] + x[2] << "\nAverage is " << ave << "\nProduct is " <<
	x[0] * x[1] * x[2] << "\nSmallest is " << min << "\nLargest is " << max;
	
	return 0;
}