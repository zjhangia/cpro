#include <stdio.h>
#include "header.h"

void file_pint(FILE *file, const int num){
	fprintf(file, "%d\n", num);
}
void file_pstrn(FILE *file, const char *str){
	fprintf(file, "%s\n", str);
}
void file_pstr(FILE *file, const char *str){
	fprintf(file, "%s", str);
}
void file_pfloat(FILE *file, const float num){
	fprintf(file, "%f\n", num);
}
void file_pchar(FILE *file, const char ch){
	fprintf(file, "%c\n", ch);
}
void file_pads(FILE *file, const void *po){
	fprintf(file, "%p\n", &po);
}
