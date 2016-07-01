#include"FileCompress.h"
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	int begin = GetTickCount();
	TestCompressFile();
	TestUnCompressFile();
	int end = GetTickCount();

	cout << "begin:" << begin << endl;
	cout << "end:" << end << endl;

	cout << end-begin<< endl;
	cout << getchar() << endl;
	return 0;
}