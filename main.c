#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "header.h"
#define TR "hello," "you"
//#define NOACTIVE
#define ACTIVE
int main(int argc, char ** argv){
#ifdef NOACTIVE	
	int *b; 
	b = 10;
	pads(b);
	char *str = "hello, jia";
	pads(str);
	pint(BUFF_SIZE);
	pint(BUFF_MAX_SIZE);
	pint(MAT(15, 89, 56));
	pint(MIT(12, 45, 56));
	pfloat(1.2);
	pint(MIN(2, 5));
	pint(MAX(2, 5));
	pstr("homedir:");
	pstrn(gethomedir());
	pstr("currentdir:");
	pstrn(getpwd());
	pstr(TR);
#endif
#ifdef  ACTIVE
	pstr("currentdir:");
	pstrn(getpwd());
	pstr("homedir:");
	pstrn(getenv("HOME"));
  	//mkfile("/tdemo/new/xt/", 0777, "a.jpg", "r");
	char *time = MCMAX;
	pstrn(get_current_time(time));
	FREE(time);
#endif

	return 0;
}
