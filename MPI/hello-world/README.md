# MPI


M P I = Message Passing Interface

MPI is a specification for the developers and users of message passing libraries. By itself, it is NOT a library - but rather the specification of what such a library should be.

## Programming Model

![MPI programming model](https://raw.githubusercontent.com/PSKP-95/high-performance-computing/master/MPI/destributed_mem.gif)

## Semantic Terms

- **nonblocking**: A procedure is nonblocking if it may return before the associated operationcompletes, and before the user is allowed to reuse resources (such as buffers) specifiedin the call.  The word complete is used with respect to operations and any associatedrequests and/or communications.  An **operation completes** when the user is allowedto reuse resources, and any output buffers have been updated.
- **blocking** A procedure is blocking if return from the procedure indicates the user is allowedto reuse resources specified in the call.
- **local** A procedure is local if completion of the procedure depends only on the local executingprocess.
- **non-local** A  procedure  is  non-local  if  completion  of  the  operation  may  require  the  exe-cution  of  someMPIprocedure  on  another  process.   Such  an  operation  may  requirecommunication occurring with another user process.
- **collective** A procedure is collective if all processes in a process group need to invoke theprocedure.  A collective call may or may not be synchronizing.  Collective calls overthe same communicator must be executed in the same order by all members of theprocess group.

## How to run

### Compile

```bash
mpic++ hello_world.cpp
```

### Run

```bash
# np is number of processes
mpirun -np 2 ./a.out
```