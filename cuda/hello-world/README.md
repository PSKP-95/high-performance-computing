# "Hello World", GPU

## GPU

[Read this article from nVidia](https://blogs.nvidia.com/blog/2009/12/16/whats-the-difference-between-a-cpu-and-a-gpu/)

## How to Run

### Compile

```bash
nvcc hello_world.cu
```

### Run

```bash
./a.out
```

It is will not print what GPU said. To see what GPU said, use profiler.

### nvprof

```bash
nvprof ./a.out
```

It will show you something like this.

```bash
Hello World from GPU!
Hello World from GPU!
Hello World from GPU!
Hello World from GPU!
==84046== Profiling application: ./a.out
==84046== Profiling result:
            Type  Time(%)      Time     Calls       Avg       Min       Max  Name
 GPU activities:  100.00%  80.536us         1  80.536us  80.536us  80.536us  cuda_hello(void)
      API calls:   99.73%  133.70ms         1  133.70ms  133.70ms  133.70ms  cudaLaunchKernel
                    0.15%  205.90us        97  2.1220us     169ns  94.542us  cuDeviceGetAttribute
                    0.06%  80.088us         1  80.088us  80.088us  80.088us  cuDeviceTotalMem
                    0.05%  62.249us         1  62.249us  62.249us  62.249us  cuDeviceGetName
                    0.01%  7.5610us         1  7.5610us  7.5610us  7.5610us  cuDeviceGetPCIBusId
                    0.00%  1.1530us         3     384ns     199ns     717ns  cuDeviceGetCount
                    0.00%     846ns         2     423ns     173ns     673ns  cuDeviceGet
                    0.00%     300ns         1     300ns     300ns     300ns  cuDeviceGetUuid
```