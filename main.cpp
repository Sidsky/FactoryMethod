#include "DrinkFactory.h"

using namespace std;

int main() {
    DrinkFactory df;
    auto c = df.make_drink("tea");

    FunctionalDrinkFactory fdf;
    auto d = fdf.make_drink("coffee");

    return 0;
}
