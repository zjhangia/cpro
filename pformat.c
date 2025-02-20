#include <stdio.h>
#include "header.h"
void pstrn(const STR string){
	fprintf(stdout, "%s\n", string);
}
void pstr(const STR string){
	fprintf(stdout, "%s ", string);
}
void pint(const int num){
	fprintf(stdout, "%d\n", num);
}

void pchar(const char ch){
	fprintf(stdout, "%c\n", ch);
}

void pads(const void *p){
	fprintf(stdout, "%p\n", p);
}

void pfloat(const float num){
	fprintf(stdout, "%f\n", num);
}


