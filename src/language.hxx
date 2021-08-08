#ifndef __LANGUAGE_H__
#define __LANGUAGE_H__

#include <string>

using namespace std;

struct Language {

  virtual void configure() = 0;
  virtual void runCode(const string& code) = 0;
};


#endif // __LANGUAGE_H__