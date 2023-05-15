//
// Created by Siddharth Mehrotra on 15/5/2023.
//

#ifndef FACTORYMETHOD_DRINKFACTORY_H
#define FACTORYMETHOD_DRINKFACTORY_H

#include "HotDrink.h"
#include "HotDrinkFactory.h"
#include <map>
#include <functional>

using namespace std;

class DrinkFactory {
    map<string, unique_ptr<HotDrinkFactory>> hot_factories;
public:
    DrinkFactory() {
        hot_factories["coffee"] = make_unique<CoffeeFactory>();
        hot_factories["tea"] = make_unique<TeaFactory>();
    }
    unique_ptr<HotDrink> make_drink (const string& name) {
        auto drink= hot_factories[name]->make();
        drink ->prepare(200);
        return drink;
    }
};

class FunctionalDrinkFactory {
    map <string, function<unique_ptr<HotDrink>()>> factories ;
public:
    FunctionalDrinkFactory () {
        factories["tea"] = [] {
            auto tea = make_unique<Tea>();
            tea ->prepare(200);
            return tea;
        };

        factories["coffee"] = [] {
            auto coffee = make_unique<Coffee>();
            coffee -> prepare(300);
            return coffee;
        };
    }

    unique_ptr<HotDrink> make_drink (const string& name) {
        return factories[name]();
    }
};
#endif //FACTORYMETHOD_DRINKFACTORY_H
