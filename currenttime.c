#include "header.h"
#include <time.h>

struct tm *get_localtime(){
	time_t current_time = time(NULL);
	return localtime(&current_time);
}

const char *str_hour(){
	struct tm* local_time = get_localtime();
	if(local_time->tm_hour > 9){
		return (char*)int_to_str(local_time->tm_hour);
	}else{
		return (char*)link_str("0", int_to_str(local_time->tm_hour));
	}
}
const char *str_min(){
	struct tm* local_time = get_localtime();
	if(local_time->tm_min > 9){
		return (char*)int_to_str(local_time->tm_min);
	}else{
		return (char*)link_str("0", int_to_str(local_time->tm_min));
	}
}
const char *str_sec(){
	struct tm* local_time = get_localtime();
	if(local_time->tm_sec > 9){
		return (char*)int_to_str(local_time->tm_sec);
	}else{
		return (char*)link_str("0", int_to_str(local_time->tm_sec));
	}
}

const char *get_current_time(char *time){
	time = (char*)link_str(str_hour(), ":");
	time = (char*)link_str(time, str_min());
	time = (char*)link_str(time, ":");
	time = (char*)link_str(time, str_sec());
	return time;
}
