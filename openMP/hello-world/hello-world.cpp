#include<omp.h>
#include<iostream>

int main(int argc, char const *argv[]) {
  // set number of threads required
  omp_set_num_threads(2);

  #pragma omp parallel 
  {
    printf("My thread id: %d\n",omp_get_thread_num());

    // Check total number of threads
    if(omp_get_thread_num() == 0)
      printf("Number of threads: %d\n", omp_get_num_threads());
  }
  return 0;
}
