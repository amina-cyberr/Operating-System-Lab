# Processes in Linux
# Process Creation Program

## Objective
This program demonstrates process creation in Linux using `fork()` system call.

## Concepts Used
- fork()
- wait()
- Parent and Child Processes
- Process Synchronization

## Compile

```bash
gcc process_creation.c -o process
```

## Run

```bash
./process
```

## Output
The child process prints numbers from 0-9.
The parent process prints alphabets from a-z.

## Learning Outcome
Learned how Linux creates and manages parent-child processes.
