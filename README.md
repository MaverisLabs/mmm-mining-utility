# mmm-mining-utility
mmm-mining-utility for CTF. Intentionally vulnerable

To compile in a vulnerable state, use:

`gcc -m32 -O0 -ggdb -static -U_FORTIFY_SOURCE -fno-stack-protector -mpreferred-stack-boundary=2 -zexecstack -no-pie -o mmm_mining_utility mmm_mining_utility.c`

These files are provided for local testing. Please follow the CTF challenge instructions to access the remote server in order to obtain the CTF flag.
