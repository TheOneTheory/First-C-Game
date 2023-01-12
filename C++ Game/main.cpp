#include <iostream>
#include <list>
#include <random>
#include "map_gen.h"

using namespace std;

template <class T, class U> void say(T thing, U other) {
	cout << thing << other << endl;
}

void map_gen();

int main() { map_gen(2); }
