#ifndef __FidoKin__Robby__
#define __FidoKin__Robby__

#include <SFML/Graphics.hpp>

class Robby : public sf::RectangleShape {
public:
    /* Construct a robot of a certain width
     * and height.
     */
    Robby(int x, int y, int width, int height);
    
    /* Set robot motor values and return a
     * gyro sensor double.
     *
     * Should be called every loop.
     * Speed is ~1.
	 * DeltaTime is in milliseconds.
     */
    double go(int motLeft, int motRight, double speed, double deltaTime);
    
    /* In testing method which simulates
     * acceleration in the kinematic model.
     *
     * Usage is identical to Robby::go().
     */
    double goAccel(int motLeft, int motRight);
protected:
    // Clock for velocity->distance aproximation.
    sf::Clock moveClock;
    
    int m1Last,m2Last,m1Target,m2Target;
    double speed;
};

#endif