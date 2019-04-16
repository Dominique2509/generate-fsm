# Generate Finite State Machines
A python script to generate Finite State Machines in C.

# How to use
This generator requires python3 and any C compiler.
```bash
$ python3 generate.py > fsm.c
$ gcc fsm.c -o fsm
$ ./fsm
```

The input to the Finite State Machine is the input alphabet defined in `generate.py`.
The FSM requires an input and outputs the current state after every input.
