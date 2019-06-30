#include<stdlib.h>
#include<errno.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int result = 0 ;
	int a,b,c,d,e,f;
	int temp1,temp2,temp3;
	int store1,store2,store3;
	int processID;
	
	
	cout << "Enter the values of a,b,c,d,e,f one by one: " << endl;
	cin >> a >> b >> c >> d >> e >> f;
	cout<<"\n";
	
	processID = fork();
	
	
	wait(&store1);//first the child process complte its execution
	if(processID == 0)
	{
		exit(a*b);
	}
	else if(processID > 0)
	{
		
		processID = fork();
		wait(&store2);
		
		
		if(processID == 0)
		{
			exit(c/d);
		}
		else if( processID > 0)
		{
			
			processID = fork();
			wait(&store3);
			
			
			if( processID == 0)
			{
				exit(e-f);
			}
			
			else if( processID > 0){
				result = WEXITSTATUS (store1) + WEXITSTATUS (store2) + WEXITSTATUS (store3);
				cout << "Result = " << result << endl;
			}
			
		}
		
	}
	
}
