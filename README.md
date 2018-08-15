## CodeChecker

This is a simple tool to avoid c/c++ sources use asm and dangerous system call.

Now it only works for c functions.

### how it works

This program execute g++ to generate asm code.

In my computer, all the external functions have the pattern like xxx@PLT or xxx@GOTPCREL(%rip).

So we can find all the functions and compare with the whitelist.