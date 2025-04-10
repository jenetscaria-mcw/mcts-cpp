/**
 * Utils.
 * @author Quentin Deschamps (mailto:quentindeschamps18@gmail.com)
 * @date 2022
 */
#ifndef UTILS_HPP
#define UTILS_HPP

#include <random>

// Random number generator using Mersenne Twister
inline static std::random_device RD;
inline static std::mt19937 RNG(RD());

#endif
