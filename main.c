/*-----------------------------------------------------------------
 | CS 998: Technically Legal C Abuse               			      |
 | Assignment 1: Optimized "Hello, World!"          		      |
 | Due Date: 2/7/25                              		          |
 | File: main.c                                 		          |
 | Written By: Collin Lasley and Hart Chrisman     	 		      |
 | Description: The fastest and hardest to read Demo Code around! |
 -----------------------------------------------------------------*/
 
 #define writeln(X) printf(X);
 #define BEGIN {
 #define END }
 
 #include <stdio.h>
 
 int main(void)
 BEGIN
 
 const char* hello = "Hello, World!\n";
 unsigned int hbytes = 15;
 
 	__asm__{
 		push dword hbytes
		push dword hello
		push dword 1

		mov eax, 0x4
		int 0x80
 	}
 	
 	#define one 0
 	#ifdef __APPLE__
 		#warning "Hey, I'm on a Mac!"
 	#endif
 	return ((((((((((((\
 	(((((\
 	(\
 	((((((((\
 	(((((one))))))))))\
 	)))))))))))))))))))));
 END