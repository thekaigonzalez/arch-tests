#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#include <readline/readline.h>
#include <readline/history.h>

#define xr(x) R(x)
#define R(x) return x

int main() 
{
    char* a = readline("> ");
    printf("Hello, %s!", a);
    return 0x01; // after execution
}
