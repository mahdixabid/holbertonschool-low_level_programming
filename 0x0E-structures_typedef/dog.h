#ifndef HEADER_FILE
#define HEADER_FILE
/**
 *struct dog - dog is dog
 *@name: char
 *@age: float
 *@owner: char
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dogi;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog_t *new_dog(char *name, float age, char *owner);
void free_dog(struct dogi *d);
int _putchar(char c);
#endif
