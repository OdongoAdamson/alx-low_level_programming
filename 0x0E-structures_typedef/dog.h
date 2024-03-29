#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - a structure for dog
 * @name: Name of god
 * @age: Age of the dog
 * @owner: Owners name
 *
 * Description: atributes of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
