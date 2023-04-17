#ifndef dog_h
#define dog_h

/**
 * struct dog - Dog with a few attributes
 * @name: The name of the dog as a pointer to the first character of a string
 * @age: The age of the dog aas a float
 * @owner: The name of the owner of the dog as a pointer to the first character
 * of a string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
