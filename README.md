# mmm-mining-utility
mmm-mining-utility for CTF. Intentionally vulnerable

To compile in a vulnerable state, use:

`gcc -m32 -O0 -ggdb -static -U_FORTIFY_SOURCE -fno-stack-protector -mpreferred-stack-boundary=2 -zexecstack -no-pie -o mmm_mining_utility mmm_mining_utility.c`

As well as disable ASLR:

`sudo echo 0 > /proc/sys/kernel/randomize_va_space`

It is strongly encouraged to do this in a VM, preferrably a sandbox.

After testing, remember to enable ASLR:

`sudo echo 1 > /proc/sys/kernel/randomize_va_space`

These files are provided for local testing. Please follow the CTF challenge instructions to access the remote server in order to obtain the CTF flag.
