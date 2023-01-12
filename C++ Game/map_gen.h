#pragma once

#include <iostream>
#include <random>

using namespace std;

void map_gen(int avg) {

    int size = 30;
    int tiles[30][30]{};

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            tiles[j][i] = rand() % 10 + 0;
        }
    }

    for (int times = 0; times <= avg; times++) {
        for (int x = 0; x < size; x++) {
            for (int y = 0; y < size; y++) {
                if (x && y != size - 1 || 0) {
                    tiles[y][x] = (tiles[y][x] + tiles[y + 1][x] + tiles[y][x + 1]) / 3;
                }
            }
        }
    }

    for (int x = 0; x < size; x++) {
        for (int y = 0; y < size; y++) {
            if (tiles[y][x] == 0) {
                cout << " " << " ";
            }
            else if (tiles[y][x] == 1) {
                cout << "~" << " ";
            }
            else if (tiles[y][x] == 2) {
                cout << "*" << " ";
            }
            else if (tiles[y][x] == 3) {
                cout << "%" << " ";
            }
            else if (tiles[y][x] == 4) {
                cout << "#" << " ";
            }
            else {
                cout << "@" << " ";
            }
        }
        cout << endl;
    }
}

