#ifndef __HEADER__H__
#define __HEADER__H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define BUFF_SIZE		 1<<9
#define BUFF_MAX_SIZE	 1<<10

#define	STR				 char*

//max min of two
#define MAX(a, b) (a)>(b)?(a):(b)
#define MIN(a, b) (a)>(b)?(b):(a)
#define MAT(a, b, c) MAX(a, b)>(c)?MAX(a, b):(c)

#define MIT(a, b, c) MIN(a, b)>(c)?(c):MIN(a, b)

#define SECHAR		sizeof(char)
#define MACHAR 		malloc(sizeof(char))
#define MAINT		malloc(sizeof(int))
#define MCMAX		malloc(sizeof(char) * 256)
//input format
void	pint	(const int);
void	pchar	(const char);
void	pads	(const void*);
void	pstr	(const STR);
void	pfloat	(const float);
void 	pstrn	(const STR);
//system info
char	*getpwd			();
char	*getusername	();
char	*gethomedir		();

//make file
void	mkfile	(const char *, const int, const char *, const char *);
void 	FREE	(void *);


//share functions
const 	char	*link_str	(const char*, const char*);
const	char	*int_to_str	(int);
const	int		str_to_int	(const char*);
#endif

