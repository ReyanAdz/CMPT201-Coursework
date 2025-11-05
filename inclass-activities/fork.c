#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main() {
  pid_t parent = getpid();
  fork();
  if ((long)getpid() == parent) {
    printf("Parent\n");
  } else {
    printf("child pid");
    printf("%ld", (long)getpid());
  }
}
