# unp
unix network programming

variable argument lists in C using va_list
```
int func_a(int x, ...)
{
    va_list a_list;
    va_start(a_list, x);
    #do something
    va_end(a_list);
}
```
