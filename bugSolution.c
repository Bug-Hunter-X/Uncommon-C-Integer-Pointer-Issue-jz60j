The code is correct and demonstrates expected behavior.  The issue isn't a bug, but rather a demonstration of how pointers work in C.  If the intention was to avoid modifying x, a const pointer should be used.  For example:

```c
int main() {
  int x = 10;
  const int *ptr = &x;
  //*ptr = 20; This would cause a compile-time error
  printf("%d\n", x);
  return 0;
}
```
This revised code prevents modification of the value pointed to by the pointer.