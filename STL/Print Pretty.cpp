//author @Nishant

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        cout  << nouppercase << left << hex << showbase << (long)A << endl;
        cout << fixed << setfill('_') << setw(0xf) << right << showpos << noshowbase << setprecision(2) << B << endl;
        cout << uppercase << scientific << noshowpos << setprecision(9) << C << endl;
	}
	return 0;
}