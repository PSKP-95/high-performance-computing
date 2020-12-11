#include<cuda_runtime.h>
#include<stdio.h>

// this function will run on gpu
__global__ void cuda_hello(){
    printf("Hello World from GPU!\n");
}

int main() {
    // <<<M,T> M is thread blocks and T is parallel threads in each thread block
    // so cuda_hello will run 4 times
    cuda_hello<<<2,2>>>(); 
    return 0;
}