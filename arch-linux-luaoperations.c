#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#include <stdio.h>
#include <readline/history.h>
#include <readline/readline.h>

void stat_buffer(char* fb)
{
    malloc(fb);
    printf(fb);
}

int main() 
{
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);
    stat_buffer("run a file (with extension): ");
    char* file = readline("");
    luaL_dofile(L, file);
    return 0x01; // after execution
}