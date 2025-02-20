#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void FREE(void *p){
	free(p);
	p = NULL;
}

const char *last_s_str(const char *str){
	char *last_s_str = malloc(sizeof(char) * 8);
	if(strlen(str) < 7){
		return str;
	}else{
		int i  = 0;
		for( ; i < 7 ; i ++){
				last_s_str[i] = str[strlen(str) - 7 + i];
			}
		}
}

const char *link_str(const char * s1, const char *s2){
	const char *str = malloc(strlen(s1) + strlen(s2) + 1);
	strcpy(str, s1);
	strcat(str, s2);
	return str;
}

//int string
int pow_10(int n){
	int result = 1;
	for(int i = 0; i < n; i ++){
		result *= 10;
	}
	return result;
}

int count_digital(int value){
	int n = 0;
	if(value == 0){
		n = 1;
	}else{
		while(value > 0){
			value /= 10;
			n ++;
		}
	}
	return n;
}

const int_to_str(int num){
	int n = count_digital(num);
	char *buffer = malloc(sizeof(char) * n + 1);
	for(int i = 0; i < n; i ++){
		buffer[i] = num / pow_10(n - i - 1) + '0';
		num %= pow_10(n - i - 1);
	}
	buffer[n] = '\0';
	return buffer;
}

const str_to_int(const char *str){
	int value = 0;
	while(*str != '\0'){
		value = value * 10 + (*str - '0');
		str ++;
	}
	return value;
}
