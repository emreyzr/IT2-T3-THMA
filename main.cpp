/**
 * @file main.cpp
 * @author Emre 3017477
 * @brief This file creates a Vector3D object to test constructors, getters, setters and deconstructors of the class
 * @version 1.0
 * @date 2025-04-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */

//Including necessary libraries
#include <iostream>
#include "Vector3D.hpp"

int main (){
    
    //creating a block to test constructor and deconstructor with specifically a blank object
    {
        Vector3D V0; //calling the constructor to create a blank object
        //getting all coordinate values to check if the constructor assigned 0.0 to the blank attributes
        V0.getX();
        V0.getY();
        V0.getZ();

        //setting coordinates to check the setter functions
        V0.setX(1.0);
        V0.setY(2.0);
        V0.setZ(3.0);

        //getting all coordinate values once more to check if setter functions are successful
        V0.getX();
        V0.getY();
        V0.getZ();
    }
    
    //creating a block to test the class with x-coordinate defined
    {
        Vector3D VX(4.0); //calling the constructor to create a Vector3D object with only x-coordinate defined
        
        //getting all coordinate values to check if the constructor assigned 4.0 to x attribute and 0.0 to the unknown attributes
        VX.getX();
        VX.getY();
        VX.getZ();
    }
    //expecting a "Goodbye!" output


    //creating a block to test the class with x- and y-coordinates defined
    {
        Vector3D VXY(5.0, 6.0); //calling the constructor to create a Vector3D object with only x- and y-coordinate defined
        
        //getting all coordinate values to check if the constructor assigned 5.0 to x attribute, 6.0 to y attribute and 0.0 to the unknown attributes
        VXY.getX();
        VXY.getY();
        VXY.getZ();
    }
    //expecting a "Goodbye!" output


    //creating a block to test the class with x-, y- and z-coordinates defined
    {
        Vector3D VXYZ(7.0, 8.0, 9.0); //calling the constructor to create a Vector3D object with x-, y- and z-coordinates defined
        
        //getting all coordinate values to check if the constructor assigned 7.0 to x attribute and 8.0 to y attribute and 9.0 to z attribute
        VXYZ.getX();
        VXYZ.getY();
        VXYZ.getZ();
    }
    //expecting a "Goodbye!" output
}
