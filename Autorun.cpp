#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int stnum;
string stdir;
int main()
{
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	if(MessageBox(NULL, TEXT("    是否运行自启动项目？"), TEXT("Autorun"), MB_ICONQUESTION | MB_YESNO) == IDYES){
		ifstream fin("Autorun.txt");
		for(int i = 0;getline(fin, stdir);i++){
			stdir = "start \"\" \"" + stdir + "\"";
			const char * ststr = stdir.c_str();
			system(ststr);
		}
	}
	return 0;
}
