#ifndef dog_h
#define dog_h
/**
 * struct dog - the dog struct
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the name of owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
	/* declare as many members as desired, but the entire structure size must be known to the compiler. */
}
#endif
