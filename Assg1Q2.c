//#include <iostream>
#include <stdio.h>
#include <unistd.h>

//using namespace std;

int main()
{
	fork();
	fork();
	
	cout << getpid() << endl;
	cout << getppid() << endl;
	return 0;
}