/**
 * @file Euclidean.cpp
 * @brief Implementation of the Euclidean distance function.
 */

#include "Euclidean.h"

/**
 * @brief Computes the Euclidean distance between two 2D points.
 * @param x1 X-coordinate of the first point.
 * @param y1 Y-coordinate of the first point.
 * @param x2 X-coordinate of the second point.
 * @param y2 Y-coordinate of the second point.
 * @return The Euclidean distance between the two points.
 */
double Euclidean::computeDistance(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}