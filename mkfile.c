#include "header.h"
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#define MC malloc(sizeof(char) * 256)

//file path likes /folder/pt/, filename likes a.jpg
void mkfile(const char *file_path, const int permission, const char *filename, const char *mode){

	char *homedir = MC;
	homedir = getenv("HOME");
	
	char *file_full_path = MC;
	char *temp_file_full_path = MC;	
	char *full_filename = MC;

	file_full_path = link_str(homedir, file_path);
	full_filename = link_str(file_full_path, filename);
 	temp_file_full_path = file_full_path;
	int i = 0;
	int pofslash = 0;
	while(*temp_file_full_path != '\0'){
		temp_file_full_path ++;
		i ++;
		if(*temp_file_full_path == '/'){
			char *temp_path = MC;
			pofslash = i;
			strncpy(temp_path, file_full_path, pofslash);
			if(access(temp_path, 0) == -1){
				mkdir(temp_path, permission);
			}
			FREE(temp_path);
		}
	}
	FILE *file = fopen(full_filename, "r");
	if(file == NULL){
		pstrn("file not exists creating now");
		file = fopen(full_filename, "wb");
		pstrn("file created sucessfully");
	}else{
		pstrn("file already exists");
	}
	
	fclose(file);
	file = NULL;
	FREE(file_full_path);
	FREE(full_filename);

}

