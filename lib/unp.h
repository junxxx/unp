#ifndef __UNP_H
#define __UNP_H

#include  "../config.h"

#include  <sys/types.h>
#include  <sys/socket.h>
#include  <sys/time.h>
#include  <time.h>
#include  <netinet/in.h>
#include  <arpa/inet.h>
#include  <errno.h>
#include  <fcntl.h>
#include  <netdb.h>
#include  <signal.h>
#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include  <sys/stat.h>
#include  <sys/uio.h>
#include  <unistd.h>
#include  <sys/wait.h>
#include  <sys/un.h>

/* Miscellaneous constants */
#define MAXLINE     4096        /* max text line length */
#define BUFFERSIZE  8192        /* buffer size for reads and writes */

/* Following shortens all the typecasts of pinter arguments: */
#define SA struct sockaddr

void err_quit(const char *fmt, ...);
void err_sys(const char *fmt, ...);
#endif      /* __UNP_H */
