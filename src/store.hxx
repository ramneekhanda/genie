#ifndef __STORE_H__
#define __STORE_H__

#define EOF -1
#include <nlohmann/json.hpp>

namespace Genie {
using namespace std;

class Store {
  using json = nlohmann::json;
 private:
  
 public:

  Store() {}
  string getAsJSON();
  void setFromJSON(const string& json);
};
}  // namespace Genie
#endif  // __STORE_H__
