# include <stdio.h>
# include <string.h>

// strlwr() is not standard C function. Probably it's provider by one
// implementation while the other compile you use don't
char * strlwr(char *str){
	size_t i;
	size_t len = strlen(str);
	
	for(i=0; i<len; i++)
	str[i] = tolower((unsigned char) str[i]);
	
	return str;
}
int main(){
	char string[] = "HeNRique";

	puts(strlwr(string));
	return 0;
	
}
