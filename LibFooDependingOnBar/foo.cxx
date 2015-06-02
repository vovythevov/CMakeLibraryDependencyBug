
#include <LibFooDependingOnBar/foo.h>

#include <LibBar/bar.h>

foo::foo() :
  bar_(new bar)
{
}

foo::~foo()
{
  delete bar_;
}

void foo::foo_something()
{
  bar_->bar_something();
}