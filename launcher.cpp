// launcher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //Define variables
    double velocity, height, time{}, maxHeight{}, maxTime{}, staticHeight;
    const double acc = 9.8;

    //Prompt user input for initial speed
    cout << "Input initial speed in m/s: ";
    cin >> velocity;

    //Prompt user input for initial height
    cout << "Input initial height in meters: ";
    cin >> height; staticHeight = height;
    
    cout << setw(4) << "TIME" << setw(10) << "HEIGHT" << endl; //Header for ease of reading
    while (height >= 0) { //Output loop
        do {
            
            //Output numbers
            cout << setw(4) << setprecision(1) << fixed << time;
            cout << setw(10) << setprecision(3) << fixed << height << endl;
            
            //Calculations
            time += 0.1;
            height = (-0.5 * acc * (pow(time, 2))) + (velocity * time) + staticHeight;
            
            //Interrupt loop when max height is reached
            if (maxHeight > height)
                break;
           
            maxHeight = height;
            maxTime = time;

        } while (height > 0);
    }
    time -= 0.1;
    
    //Output impact and maximum height of object
    cout << setprecision(1) << fixed << "Projectile impact after " << time << " seconds" << endl;
    cout << "Max height of object was at " << maxTime;
    cout << " seconds, at a height of " << setprecision(4) << fixed << maxHeight << " meters";
    
}
/*
Input initial speed in m/s: 10
Input initial height in meters: 0
TIME    HEIGHT
 0.0     0.000
 0.1     0.951
 0.2     1.804
 0.3     2.559
 0.4     3.216
 0.5     3.775
 0.6     4.236
 0.7     4.599
 0.8     4.864
 0.9     5.031
 1.0     5.100
 1.1     5.071
 1.2     4.944
 1.3     4.719
 1.4     4.396
 1.5     3.975
 1.6     3.456
 1.7     2.839
 1.8     2.124
 1.9     1.311
 2.0     0.400
Projectile impact after 2.0 seconds
Max height of object was at 1.0 seconds, at a height of 5.1000 meters
*/

/*
Input initial speed in m/s: 9
Input initial height in meters: 6
TIME    HEIGHT
 0.0     6.000
 0.1     6.851
 0.2     7.604
 0.3     8.259
 0.4     8.816
 0.5     9.275
 0.6     9.636
 0.7     9.899
 0.8    10.064
 0.9    10.131
 1.0    10.100
 1.1     9.971
 1.2     9.744
 1.3     9.419
 1.4     8.996
 1.5     8.475
 1.6     7.856
 1.7     7.139
 1.8     6.324
 1.9     5.411
 2.0     4.400
 2.1     3.291
 2.2     2.084
 2.3     0.779
Projectile impact after 2.3 seconds
Max height of object was at 0.9 seconds, at a height of 10.1310 meters
*/