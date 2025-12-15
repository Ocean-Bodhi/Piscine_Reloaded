/*char *strdup(const char *src) {
    char *dst = malloc(strlen (src) + 1);  // Space for length plus nul
    if (dst == NULL) return NULL;          // No memory
    strcpy(dst, src);                      // Copy the characters
    return dst;  
    
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    char source[] = "GeeksForGeeks";
    char *target = strdup(source);

    if (target == NULL) 
    {
        fprintf(stderr, "Error al asignar memoria\n");
        return 1;
    }
	printf("La 1ª es: %s \n", source);
    printf("%s\n", target);
    free(target); // Liberar la memoria asignada
    return 0;
}   
*/
int	main(void)
{
	char scr[] = "Hello";
	
	printf("La 1ª es: %s \n", scr);
	printf("Mine es: %s \n", dup);
	printf(Theirs es: %s \n", strdup(scr));
	return (0);
}
