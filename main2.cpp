#include <iostream>

using namespace std ;


power (int x, int y, int z) {
	
	if (y != 1) {
		x = z*x ;	
		return power(x, y-1, z);
	}
	else {
		return x;
	}
}

main() {
	
	int x,y,z ;
	cin >> x >> y ;
	z = x ; 
	cout<< power(x, y, z);
		
}