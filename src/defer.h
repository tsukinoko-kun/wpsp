#ifndef DEFER_H
#define DEFER_H

#include <functional>
#include <iostream>

class Defer {
public:
  Defer(std::function<void()> func) : func_(func) {}
  ~Defer() { func_(); }

private:
  std::function<void()> func_;
};

#define CONCAT_IMPL(a, b) a##b
#define CONCAT(a, b) CONCAT_IMPL(a, b)

#define DEFER(code) Defer CONCAT(defer__, __LINE__)([&]() { code; });

#endif // DEFER_H
