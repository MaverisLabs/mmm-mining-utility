// MMM_Mining_Utility.cpp : This file contains the 'main' function. Program execution begins and ends there.
// compile with: gcc -m32 -O0 -ggdb -static -U_FORTIFY_SOURCE -fno-stack-protector -mpreferred-stack-boundary=2 -zexecstack -no-pie -o mmm_mining_utility mmm_mining_utility.c

#include<stdio.h>
#include<string.h>    
#include<stdlib.h>    

void debug_console() {
	printf("[!] Success, grab your flag by executing cat flag.txt\n");
	fflush(stdout);
	system("/bin/sh");
}

int check_access(char access[41])
{
	char input[2000];
	printf("[!] Please enter the access code> ");
	fflush(stdout);
	scanf("%s", input);

	if (strcmp(input, access) == 0)
	{
		printf("[+] Access code accepted!!!\n ");
		printf("[+] Access granted!\n");
		fflush(stdout);
		return 1;
	}
	else
	{
		printf("[-] Incorrect access code, Goodbye!!!\n ");
		fflush(stdout);
		return 0;
	}

}

void get_hash(char input[512])
{
	char copied[128];

	printf("[+] Copying your input to hash checker...\n  ");
	fflush(stdout);
	strcpy(copied, input);
}

int main(int argc, char* argv[])
{	
	char input[512];
	char access_code[41] = "f39c7e0a6ff1b55d8a9cc72af6b38f4a126d62c6";
	
	/*if(argc < 2)
	{
		printf("\nUSAGE: %s <hash>\n\n",argv[0]);
		return -1;
	}*/
	
	if(check_access(access_code))
	{
		printf("=============================================\n");
		printf("   MMM Mining Utility v0.1a \n");
		printf("============================================= \n");
		printf("\n");
		printf("[!] Insert your hash> ");
		fflush(stdout);
		scanf("%s",input);
		get_hash(input);
	}
	return 0;
}
