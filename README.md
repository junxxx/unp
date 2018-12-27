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
what's the keyword of static in C ?

```
gcc file1.c file2.c -I path/to/include/header.h
```

enable [daytime service](https://en.wikipedia.org/wiki/Xinetd) in linux on default port 13
