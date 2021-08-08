#ifndef __LUALANG_H__
#define __LUALANG_H__

#include <iostream>

#include <lua.hpp>

#include "language.hxx"

struct LuaLang: public Language {
private: 
  lua_State *lua;
public:
  LuaLang();
  virtual ~LuaLang();
  virtual void configure();
  virtual void runCode(const string& code);
};

#endif // __LUALANG_H__