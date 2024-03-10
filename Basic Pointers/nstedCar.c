#include <stdio.h>
#include <string.h>

typedef struct{
    int horsepower;
    double displacement;
} Engine;

typedef struct{
    char make[50];
    char model[50];
    Engine engine;
} Car;

void initializeCar(Car *c, const char *make, const char *model, int horsepower, double displacement)
{
    strcpy(c->make, make);
    strcpy(c->model, model);
    c->engine.horsepower = horsepower;
    c->engine.displacement = displacement;
}

void printCar(const Car *c)
{
    printf("Car Make: %s\n", c->make);
    printf("Car Model: %s\n", c->model);
    printf("Engine horsepower: %d\n", c->engine.horsepower);
    printf("Displacement: %.2f\n", c->engine.displacement);
}


int main(void)
{
    printf("-------------------------------------------\n");
    Car myCar;
    initializeCar(&myCar, "McLaren", "720S Spider", 260, 3.0);
    printCar(&myCar);
    printf("-------------------------------------------\n");
}