#include <bits/stdc++.h>

using namespace std;
 
int main(){ 
    
    int A, B, ABS;

    cin >> A >> B >> ABS;
    
	if (A > B && A > ABS) {
		cout << A <<" eh o maior" << endl;
	} else if (B > ABS) {
		cout << B << " eh o maior" << endl;
	} else {
		cout << ABS << " eh o maior" << endl;
	}
	
    return 0;
}
