#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Inventory_item {
	char name[255];
	unsigned long long partNumber;
	short quantity;
	char sourceFlag;
	char vendorName[255];
	short departmentNumber;
}Inventory_item;

typedef enum {
	red, orange, yellow, green, blue, indigo, violet
} color;

char* ColorToString(color x){
	switch (x){
		case red:
		return "red";
		
		case orange:
		return "orange";
		
		case yellow:
		return "yellow";
		
		case green:
		return "green";
		
		case blue:
		return "blue";
		
		case indigo:
		return "indigo";
		
		case violet:
		return "violet";
		
		default:
		return "";
	}
}

int A(int m, int n){
	if (m == 0)
		return n+1;
	else if (n == 0)
		return A(m-1,1);
	else
		return A(m-1,A(m,n-1));
}

int main (int argc, char *argv[]){
	printf("Ngan Hoang - C Programs\n");
	printf("\n");
	
	printf("Part 1: Command Argument\n");
	if (argc > 1)
		printf("\t%s\n", argv[argc-1]);
	else
		printf("\tprogram\n");
	
	struct Inventory_item array[1000];
	strcpy(array[0].name, "Five-handled Family Credenza");
	array[0].partNumber = 1345678901;
	array[0].quantity = 7;
	array[0].sourceFlag = 'X';
	strcpy(array[0].vendorName, "Seuss Inc.");
	
	printf("\n");
	printf("Part 2: Composite Data Type\n");
	printf("\tArray Inventory Item:\n");
	printf("\t\tName: %s\n", array[0].name);
	printf("\t\tPart Number: %llu\n", array[0].partNumber);
	printf("\t\tQuantity: %d\n", array[0].quantity);
	printf("\t\tSource: %c\n", array[0].sourceFlag);
	printf("\t\tVendor: %s\n", array[0].vendorName);
	
	struct Inventory_item *ptr[1000];
	int i;
	for ( i = 0; i < 1000; i++) {
	 ptr[i] = &array[i];
	}
	
	strcpy(ptr[0]->name, "Enigma Cipher Machine");
	ptr[0]->partNumber = 1925;
	ptr[0]->quantity = 127;
	ptr[0]->sourceFlag = 'I';
	ptr[0]->departmentNumber = 505;
	
	printf("\tPointer Inventory Item:\n");
	printf("\t\tName: %s\n", ptr[0]->name);
	printf("\t\tPart Number: %llu\n", ptr[0]->partNumber);
	printf("\t\tQuantity: %d\n", ptr[0]->quantity);
	printf("\t\tSource: %c\n", ptr[0]->sourceFlag);
	printf("\t\tDept_Number: %d\n", ptr[0]->departmentNumber);
	printf("\n");
	
	printf("Part 3: Enumerated Type\n");
	printf("\tColor #1: %s\n", ColorToString(red));
	printf("\tColor #2: %s\n", ColorToString(yellow));
	printf("\tColor #3: %s\n", ColorToString(blue));
	
	printf("\n");
	printf("Part 4: Ackermann's Function\n");
	printf("\tA(0,1) = %d\n", A(0,1));
	printf("\tA(3,2) = %d\n", A(3,2));
	return 0;
}
