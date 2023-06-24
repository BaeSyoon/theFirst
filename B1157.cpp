#if 0
#include <iostream>
#include <string>

using namespace std;


int main() {

	string x;
	cin >> x;

	int alp[26] = {};
	              
	// A 65 a 97

	for (char d : x) {
		if (d < 97) {	// upperletter
			int F = d - 65;
			alp[F]++;
		}
		else {		// lowerletter
			int f = d - 97;
			alp[f]++;
		}
	}

	int max = alp[0];
	char max_a = 'A';
	int p = 0;
	for (int i = 1; i < 26; i++) {
		if (max < alp[i]) {
			max = alp[i];
			max_a = (char)i + 65;
			p = 0;
		}
		else if (max == alp[i]) {
			p++;
		}
	}

	if (p == 0)
		cout << max_a;
	else
		cout << "?";
}

}
#endif