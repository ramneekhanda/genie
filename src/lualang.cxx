
#include "lualang.hxx"

LuaLang::LuaLang() {
  lua = luaL_newstate();
  luaL_openlibs(lua);
}

LuaLang::~LuaLang() {
  lua_close(lua);
}

void LuaLang::configure() {
}

void LuaLang::runCode(const string& code) {
  if (luaL_loadstring(lua, code.c_str()) == 0) {
    if (lua_pcall(lua, 0, 0, 0) == 0) {
      lua_pop(lua, lua_gettop(lua));
    }
  }
}
