#include <stdio.h> 

int currentState = 0;

void makeTransition(char input) { 
	switch (currentState) {
	case 0:
		switch (input) { 
			case 'A':
				currentState = 3;
				return; 
			case 'D':
				currentState = 4;
				return; 
			case 'C':
				currentState = 3;
				return; 
			case 'B':
				currentState = 0;
				return; 
		break;
		}
	case 1:
		switch (input) { 
			case 'D':
				currentState = 0;
				return; 
			case 'B':
				currentState = 1;
				return; 
			case 'C':
				currentState = 1;
				return; 
			case 'A':
				currentState = 1;
				return; 
		break;
		}
	case 2:
		switch (input) { 
			case 'B':
				currentState = 0;
				return; 
			case 'A':
				currentState = 1;
				return; 
			case 'C':
				currentState = 1;
				return; 
			case 'D':
				currentState = 4;
				return; 
		break;
		}
	case 3:
		switch (input) { 
			case 'B':
				currentState = 2;
				return; 
			case 'A':
				currentState = 3;
				return; 
			case 'C':
				currentState = 4;
				return; 
			case 'D':
				currentState = 0;
				return; 
		break;
		}
	case 4:
		switch (input) { 
			case 'C':
				currentState = 0;
				return; 
			case 'A':
				currentState = 1;
				return; 
			case 'D':
				currentState = 0;
				return; 
			case 'B':
				currentState = 3;
				return; 
		break;
		}
	} 
}

int main(int argc, char** charv) { 
	char c = 'a'; 
	while(1) {
		 printf("Input: ");		 scanf(" %c", &c); 
 		 makeTransition(c); 
		 printf("Current State: %d\n", currentState); 
	}
} 

