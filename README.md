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

```
Address format
struct sockaddr_in {
    sa_family_t     sin_family;     /* address family: AF_INET */
    in_port_t       sin_port;       /* port in network byte order */
    struct in_addr  sin_addr;       /* internet address */
}

/* Internet address. */
struct in_addr {
    uint32_t        s_addr;         /* address in network byte order */
}
```
OSI(open systems interconnection) Model


Network Byte Order (Big-endian)

Host Byte Order (usually little-endian,but depends)


