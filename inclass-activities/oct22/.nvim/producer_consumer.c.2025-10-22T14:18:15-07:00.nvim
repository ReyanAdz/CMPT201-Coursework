#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;

static int avail = 0;

static void *thread_func(void *arg) {
  for (;;) {
    int s = pthread_mutex_lock(&mtx);
    if (s != 0) {
      perror("pthread_mutex_lock");
      pthread_exit((void *)1);
    }
    avail++;

    s = pthread_mutex_unlock(&mtx);
    if (s != 0) {
      perror("pthread_mutex_lock");
      pthread_exit((void *)1);
    }
    sleep(1);
  }
  return 0;
}

int main() {}
