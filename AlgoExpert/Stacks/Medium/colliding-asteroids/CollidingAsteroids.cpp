// https://www.algoexpert.io/questions/colliding-asteroids
//
// #Stacks
// #Medium

#include <cmath>
#include "CollidingAsteroids.h"

namespace algoExpert::stacks {
    using std::signbit;
    vector<int> collidingAsteroids(vector<int> asteroids) {
        if (asteroids.size() < 2) return asteroids;
        vector<int> result; // will be used as a stack (methods back(), push_back(), pop_back()
        for (const int& asteroid : asteroids) {
            bool it_destroyed = false;
            while (!result.empty()) {
                if (signbit(asteroid) == signbit(result.back()) || !signbit(asteroid)) break;
                const auto d = result.back() + asteroid;
                if (d <= 0) result.pop_back();     // (-) destroys (+)
                if (d >= 0) {                      // (+) destroys (-)
                    it_destroyed = true;
                    break;
                }
            }
            if (!it_destroyed) result.push_back(asteroid);
        }
        return result;
    }
}
