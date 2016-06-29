#include"FileCompress.h"
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	int begin = GetTickCount();
	TestCompressFile();
	int end = GetTickCount();
	TestUnCompressFile();
	
	cout << "begin:" << begin << endl;
	cout << "end:" << end << endl;

	cout << end-begin<< endl;
	cout << getchar() << endl;
	return 0;
}