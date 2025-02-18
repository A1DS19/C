#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>

char *trl(int timeout) {
  static char buffer[512];
  fd_set rfds;
  struct timeval tv;
  int ret;

  FD_ZERO(&rfds);
  FD_SET(0, &rfds);

  tv.tv_sec = timeout;
  tv.tv_usec = 0;

  ret = select(1, &rfds, 0, 0, &tv);
  if (ret && FD_ISET(0, &rfds)){
    memset(buf, 0, 512);

  }
}

int main(int argc, char *argv[]) {

  return EXIT_SUCCESS;
}
