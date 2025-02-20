#include <stdio.h>
#include <pwd.h>
#include <unistd.h>
#include <stdlib.h>

uid_t getUid(){
    return geteuid();
}
struct passwd* getPW(){
    return getpwuid(getUid());
}
char *getpwd(){
    char *pwd = malloc(sizeof(char)*256);
	getcwd(pwd, 256);
	return pwd;
}
char *getusername() {
    return getPW()->pw_name;
}
char *gethomedir(){
    return getPW()->pw_dir;
}
