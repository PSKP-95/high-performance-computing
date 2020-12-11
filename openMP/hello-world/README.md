# "Hello World",OpenMp

## Scope

The OpenMP API covers only user-directed parallelization, wherein the programmer explicitly specifies the actions to be taken by the compiler and runtime system in order to execute the program in parallel. OpenMP-compliant implementations are not required to check for data dependencies, data conflicts, race conditions, or deadlocks, any of which may occur in conforming programs. The OpenMP API does not cover compiler-generated automatic parallelization and directives to the compiler to assist such parallelization.

## Threading Concepts

- **thread** An execution entity with a stack and associated static memory, called threadprivate memory.
- **OpenMP thread** A thread that is managed by the OpenMP runtime system.
- **thread-safe routine** A routine that performs the intended function even when executed concurrently (by more than one thread).
- **processor** Implementation defined hardware unit on which one or more OpenMP threads can execute.
- **device** An implementation defined logical execution engine. *COMMENT:* A device could have one or more processors.
- **host device** The device on which the OpenMP program begins execution 
- **target device** A device onto which code and data may be offloaded from the host device.

## Running OpenMP Code

### compile

```bash
g++ -fopenmp -o hello-world hello-world.cpp
```

### Run

```bash
./hello-world
```

## set number of thread from outside

set environment variable `OMP_NUM_THREADS`

```bash
export OMP_NUM_THREADS = 4
```