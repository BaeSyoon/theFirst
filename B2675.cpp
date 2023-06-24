#if 0
#include<iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int r;
	string str;
	while (n--) {
		cin >> r >> str;
		for (int j = 0; j < str.size(); j++) {
			for (int i = 0; i < r; i++) {
				cout << str[j];
			}
		}
		cout << endl;
	}
}


int main() { 
	int n, r;
	string str;

	for (cin >> n; n--;) {
		cin >> r >> str;
		for (char d : str)
			cout << string(r, d);	// cout << string(r, d) : d를 r번 출력?
		cout << '\n';
	}
}


#endif
