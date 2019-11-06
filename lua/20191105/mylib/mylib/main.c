//mylib.c
#include <stdio.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include <math.h>

static int myadd(lua_State *L) {
	int a = luaL_checknumber(L, 1);
	int b = luaL_checknumber(L, 2);
	lua_pushnumber(L, a + b);
	return 1;
}

static const struct luaL_Reg mylib[] = {
		{"add", myadd},
		{NULL, NULL}
};

__declspec(dllexport)
int luaopen_mylib(lua_State *L) {
	luaL_newlib(L, mylib);
	return 1;
}