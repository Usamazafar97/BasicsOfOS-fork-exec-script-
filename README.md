# BasicsOfOS(fork-exec-script)



QUESTION NO. 01

The default rm command will not con?rm before it deletes any regular ?les. Write a short script called safe rm, such that it will make a copy before deleting a single ?le (that is, we do not use wildcard expressions for this problem) by do the following:
• Take one and only one argument at the command line (hint: search for an expression representing the number of arguments in the shell scripts). Print out an error message if no argument or more than one arguments are provided (hint: use echo).
• Create a directory “safe_rm_recycle” in the current one if it is not already created.
• Copy the ?le indicated by the ?rst argument to this “safe_rm_recycle” folder.
• Remove this ?le in the current working directory.


QUESTION NO. 02

Write a C program on Linux platform to implement the below given process hierarchy. Each process displays its name (e.g. P1), 
its process ID and the proh cess ID of its parent. A process used the getpid () and getppid () system calls to obtain these IDs. Sample output of the process is:
			 --------
                         |      | 
			 |  P1  |
			 |      |
			 --------
			    |
                            |
                ------------------------
                |                      |
                |                      |
             -------                --------
 	     |  P2 |                |  P3  |
             |     |                |      |
             -------                --------
                |
                |
             -------                
 	     |  P4 |                
             |     |                
             ------- 
					
					
					
QUESTION NO. 03
Write a C program on Linux platform to implement the below given scenario. You have to solve the following equation: x= (a*b) + (c/d) + (e-f);
Write a code in such a way that each part of equation is solved by child proW cesses and parent get results from the child processes and compute the ?nal result.
For Example, Child 1 Solves: a*b Child 2 Solves: c/d Child 3 Solves: e-f
And Parent will compute x=x= (a*b) + (c/d) + (e-f) after getting the results of each portion of equation from child processes.
Take values of a,b,c,d,e,f from user in parent process.
Important Note: There should be only one parent process and all the child beT longs to that parent process.
		
					
					
				
							
								
					
						
					
					
						
							
									
						
					
				
					
				
				
		


