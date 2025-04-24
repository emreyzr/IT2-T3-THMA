/**
 * @file Vector3D.hpp
 * @author Emre 3017477
 * @brief 
 * @version 1.0
 * @date 2025-04-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#pragma once
#include <iostream>
using namespace std;

/** 3-Dimensional vector class
 * @brief Create 3 dimensional vectors with x-,y-, and z-coordinates
 * 
 */
class Vector3D
{
    private:
        double x; /**< X coordinate of the vector */ 
        double y; /**< Y coordinate of the vector */
        double z; /**< Z coordinate of the vector */  

    public:
        /**
         * @brief Construct new blank Vector 3D object
         * 
         */
        Vector3D(): x{0.0}, y{0.0}, z{0.0} {}

        /**
         * @brief Construct new Vector 3D object with only x-coordinate
         * 
         */
        Vector3D(double ax);

        /**
         * @brief Construct new Vector 3D object with x- and y-coordinates
         * 
         */
        Vector3D(double ax, double ay);

        /**
         * @brief Construct new Vector 3D object with x-, y-, and z-coordinates
         * 
         */
        Vector3D(double ax, double ay, double az);

        /**
         * @brief Set a new value for X coordinate
         * 
         * @param w 
         */
        void setX(double w);
        
        /**
         * @brief Set a new value for Y coordinate
         * 
         * @param w 
         */
        void setY(double w);

        /**
         * @brief Set a new value for Z coordinate
         * 
         * @param w 
         */
        void setZ(double w);
        
        /**
         * @brief Get (returns) value for X coordinate
         * 
         */
        double getX();

        /**
         * @brief Get (returns) value for Y coordinate
         * 
         */
        double getY();

        /**
         * @brief Get (returns) value for Z coordinate
         * 
         */
        double getZ();

        /**
         * @brief Destroy the Vector 3-D object
         * 
         */
        ~Vector3D();
};