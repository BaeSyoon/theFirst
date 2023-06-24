#if 0
#include <iostream>
#include <string>
using namespace std;
//백준 설정 -> 보기 -> '예제 공백 하이라이트' 옵션을 켜면 공백이 노란색으로 잘 보이기 때문에 참고
//int main() {
//
//	string a;
//	int count = 0;
//	
//	getline(cin, a);
//
//	for (int i = 0; i < a.size() - 1; i++) {
//		if (a[i] == ' ') count++;
//	}
//
//
//	int case_;
//	if (a[0] == ' ' && a[a.size() - 1] == ' ')
//		case_ = 0;
//	else if (a[0] == ' ' || a[a.size() - 1] == ' ')
//		case_ = 1;
//	else
//		case_ = 2;
//
//	switch (case_)
//	{
//	default: 
//		cout << "Error";
//		break;
//	case 0:
//		cout << count - 1;
//		break;
//	case 1:
//		cout << count;
//		break;
//	case 2:
//		cout << count + 1;
//		break;
//	}
//	
//}




int main() {

	string a;
	int count = 0;
	
	getline(cin, a);

	for (int i = 0; i < a.size() - 1; i++) {
		if (a[i] == ' ') count++;
	}


	int case_;
	if (a[0] == ' ')
		case_ = 0;
	else
		case_ = 1;

	switch (case_)
	{
	case 0:
		cout << count;
		break;
	case 1:
		cout << count + 1;
		break;
	}
}
#endif