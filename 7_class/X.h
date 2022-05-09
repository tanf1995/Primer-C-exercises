#ifndef X_H
#define X_H
struct X
{
  X() = default;
  X (int i, int j): base(i), rem(base % j) {};
  int rem, base;
};


#endif
