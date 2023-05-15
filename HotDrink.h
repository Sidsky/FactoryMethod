#ifndef FACTORYMETHOD_HOTDRINK_H
#define FACTORYMETHOD_HOTDRINK_H

#include <iostream>

using namespace std;

struct HotDrink{
    virtual ~HotDrink() = default;
    virtual void prepare (int volume) = 0;
};

struct Tea : HotDrink {
    void prepare(int volume) override {
        cout << "Take tea bag, boil water, pour " << volume << "ml" << endl;
    }
};

struct Coffee : HotDrink{
    void prepare(int volume) override {
        cout << "Coffee, boil water, pour " << volume << "ml" << endl;
    }
};

#endif //FACTORYMETHOD_HOTDRINK_H
