#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - defines dog macro
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: describes dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Type definition for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*DOG_H*/
