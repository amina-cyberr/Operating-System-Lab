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

# execv() System Call Program

## Objective
This program demonstrates how the `execv()` system call replaces a process image in Linux.

## Concepts Used
- fork()
- execv()
- wait()
- Parent and Child Processes

## Compile

```bash
gcc execv_system_call.c -o execv_program
```

## Run

```bash
./execv_program
```

## Working
- First child executes `ls /bin`
- Second child executes `ls /home`

## Learning Outcome
Learned how Linux replaces processes using the exec family system calls.

