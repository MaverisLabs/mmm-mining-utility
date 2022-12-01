// MMM_Mining_Utility.cpp : This file contains the 'main' function. Program execution begins and ends there.
// compile with: gcc -m32 -O0 -ggdb -static -U_FORTIFY_SOURCE -fno-stack-protector -mpreferred-stack-boundary=2 -zexecstack -no-pie -o mmm_mining_utility mmm_mining_utility.c

#include<stdio.h>
#include<string.h>    
#include<stdlib.h>    

void debug_console() {
	system("/bin/sh");
}

void get_hash(char input[512])
{
	char copied[128];

	printf("[+] Copying your input to hash checker...\n  ");
	strcpy(copied, input);
}

int main(int argc, char* argv[])
{	
	if(argc < 2)
	{
		printf("\nUSAGE: %s <hash>\n\n",argv[0]);
		return -1;
	}

	printf("=============================================\n");
	printf("   MMM Mining Utility v0.1a \n");
	printf("============================================= \n");
	printf("\n");

	get_hash(argv[1]);

	return 0;
}
