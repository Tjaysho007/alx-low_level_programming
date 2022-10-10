#ifndef DOG_H
#define DOG_H


/**
 * struct dog - struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Description: this is the struct of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
typedef struct dog dog_t;
void init_dog(struct dog *t, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_d *d);

#endif /*DOG_H*/

