import random
import sys

# State the amount of states and transitions the FSM should have.
num_of_states = 5
transitions = 4;

# Your input alphabet, can be any character
input_alphabet = {"A", "B", "C", "D"}

if transitions > len(input_alphabet):
    sys.exit("Input alphabet has to be longer than the amount of transitions.")

res = "#include <stdio.h> \n\nint currentState = 0;\n\n"

res = res + "void makeTransition(char input) { \n"
res = res + "\tswitch (currentState) {\n"

# Generate cases for every state and create transitions
for i in range(num_of_states):
    res = res + "\tcase " + str(i) + ":\n"
    rand_item = random.sample(input_alphabet, transitions)
    res = res + "\t\tswitch (input) { \n"
    for k in rand_item:
        next_state = str(random.randint(0, num_of_states - 1))
        res = res + "\t\t\tcase \'" + k + "\':\n"
        res = res + "\t\t\t\tcurrentState = " + next_state +";\n"
        res = res + "\t\t\t\treturn; \n"
    res = res + "\t\tbreak;\n\t\t}\n"
res = res + "\t} \n}\n\n"

# Generate the main function
res = res + "int main(int argc, char** charv) { \n"
res = res + "\tchar c = \'a\'; \n"
res = res + "\twhile(1) {\n"
res = res + "\t\t printf(\"Input: \");"
res = res + "\t\t scanf(\" %c\", &c); \n "
res = res + "\t\t makeTransition(c); \n"
res = res + "\t\t printf(\"Current State: %d\\n\", currentState); \n"
res = res + "\t}\n"
res = res + "} \n"
print(res)
