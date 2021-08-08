#ifndef __BOUND_FUNCTIONS_H__
#define __BOUND_FUNCTIONS_H__

#include <string>

namespace BoundFunctions {

using namespace std;

void setValueAsString(const string& key, const string& value);

void setValueAsInteger(const string& key, int value);

void setValueAsBool(const string& key, bool value);

void setValueAsDouble(const string& key, double value);

}  // namespace BoundFunctions

#endif  // __BOUND_FUNCTIONS_H__