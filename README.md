## CodeChecker

This is a simple tool to avoid c++ sources use asm and dangerous system call.

Now it only works for c functions.

I decided not to add c++ functions.

You can edit gen.cpp for your own judger.

### how it works

This program execute g++ to generate asm code.

In my computer, all the external functions have the pattern like xxx@PLT.

So we can find all the functions and compare with the whitelist.