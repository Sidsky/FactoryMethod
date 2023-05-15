#ifndef FACTORYMETHOD_HOTDRINKFACTORY_H
#define FACTORYMETHOD_HOTDRINKFACTORY_H

#include "HotDrink.h"

struct HotDrinkFactory {
    virtual unique_ptr<HotDrink> make () const = 0;
};

struct TeaFactory : HotDrinkFactory {
    unique_ptr<HotDrink> make() const override {
        return make_unique<Tea>();
    }
};

struct CoffeeFactory : HotDrinkFactory {
    unique_ptr<HotDrink> make() const override {
        return make_unique<Coffee>();
    }
};
#endif //FACTORYMETHOD_HOTDRINKFACTORY_H
