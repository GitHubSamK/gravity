#include <iostream>
#include <string>
using namespace std;

const float g = 9.8;

float timeToDistance(float t)
{
    return 0.5 * g * t * t;
}

main()
{

    float time;
    cout << "enter the amount of time object takes to fall in seconds: ";
    cin >> time;

    float distance = timeToDistance(time);

    cout << "the distance the object has fallen is: " << distance << " meters in " << time << " seconds." << endl;

    return 0;
}