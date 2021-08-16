#include <lualib.h>
#include <lua.h>
#include <lauxlib.h>

#include <stdio.h>

int main()
{
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dofile(L, "./hello.lua");
}