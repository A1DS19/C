#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct thread_data {
  pid_t pid;
  char *message;
} thread_data;

void *hello() {
  printf("hello world\n");
  return NULL;
}

void *print_message(void *ptr) {
  char *message = (char *)ptr;
  printf("%s\n", message);
  return NULL;
}

void *print_params(void *params) {
  thread_data *params_data = (thread_data *)params;
  printf("from thread %d, says %s\n", params_data->pid, params_data->message);
  return NULL;
}

void *return_message(void *args) {
  char *message = strdup("hello from returned data");
  return (void *)message;
}

int main(int argc, char *argv[]) {
  // single thread, no return, no params
  pthread_t thread = 0;
  pthread_create(&thread, NULL, &hello, NULL);
  pthread_join(thread, NULL);

  // multi threads, no return, with params
  pthread_t thread1, thread2;
  char *message1 = "hello world from thread 1";
  char *message2 = "hello world from thread 2";
  int iret1 = 0, iret2 = 0;

  iret1 = pthread_create(&thread1, NULL, print_message, (void *)message1);
  iret2 = pthread_create(&thread2, NULL, print_message, (void *)message2);

  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);

  // single thread, with multi params
  pthread_t thread3;
  thread_data my_thread_data;

  my_thread_data.message = malloc(255 * sizeof(char));
  my_thread_data.pid = getpid();
  my_thread_data.message = "hello world";

  int iret3 =
      pthread_create(&thread3, NULL, print_params, (void *)&my_thread_data);
  pthread_join(thread3, NULL);

  // single thread, with return
  pthread_t thread4;
  char *return_message_str;

  int iret4 = pthread_create(&thread4, NULL, return_message, NULL);
  pthread_join(thread4, (void **)&return_message_str);
  printf("%s\n", return_message_str);

  pthread_exit(NULL);

  return EXIT_SUCCESS;
}
