#include <sys/socket.h>
#include <sys/types.h>
#include <sys/un.h>

int main() {
  struct sockaddr_un addr;
  int sock = socket(PF_UNIX, SOCK_STREAM, 0);
  addr.sun_family = AF_UNIX;
  bind(sock, (struct sockaddr *)&addr, sizeof(struct sockaddr_un));
  listen(sock, 32);
  accept(sock, NULL, NULL);
}
