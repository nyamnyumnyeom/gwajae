#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Animal {
public:
    virtual void makeSound() const = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void makeSound() const override {
        cout << "월우렁뤙루어뤄우럴월월월!!!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() const override {
        cout << "냥냥" << endl;
    }
};

class Cow : public Animal {
public:
    void makeSound() const override {
        cout << "음뭐~~" << endl;
    }
};


class Zoo {
private:
    Animal* animals[10];
    int animalCount;

public:
    Zoo() : animalCount(0) {}


    void addAnimal(Animal* animal) {
        if (animalCount < 10) {
            animals[animalCount++] = animal;
        }
    }

    void performActions() {
        for (int i = 0; i < animalCount; ++i) {
            animals[i]->makeSound();
        }
    }


    ~Zoo() {
        for (int i = 0; i < animalCount; ++i) {
            delete animals[i];
        }
    }
};

Animal* createRandomAnimal() {
    int randomValue = rand() % 3;
    if (randomValue == 0) {
        return new Dog();
    }
    else if (randomValue == 1) {
        return new Cat();
    }
    else if (randomValue == 2) {
        return new Cow();
    }
}


int main() {

    Zoo myZoo;

    for (int i = 0; i < 10; ++i) {
        Animal* newAnimal = createRandomAnimal();
        myZoo.addAnimal(newAnimal);
    }

    myZoo.performActions();

    return 0;
}
