#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int stnum;
string stdir;
int main() {
	if (MessageBoxEx(NULL, TEXT("    是否运行自启动项目？"), TEXT("Autorun"), MB_ICONQUESTION | MB_YESNO, MAKELANGID(GetUserDefaultUILanguage(), GetUserDefaultUILanguage())) == IDYES) {
		ifstream fin("Autorun.txt");
		for (int i = 0; getline(fin, stdir); i++) {
			stdir = "cmd /c start \"\" \"" + stdir + "\"";
			const char * ststr = stdir.c_str();
			WinExec(ststr, SW_HIDE);
		}
	}
	return 0;
}
