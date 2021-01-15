#include <iostream>

#include <vector>
#include <math.h>
#include <string>

using namespace std;

double fnLMLengthOfVector(vector<double> vectorSource) {
    double numberWithinSqrt = 0.0;
    for (int i = 0; i < vectorSource.size(); ++i) {
        numberWithinSqrt += vectorSource[i]*vectorSource[i];
    }
    double lengthOfVector = sqrt(numberWithinSqrt);
    return lengthOfVector;
}

vector<double> fnLMSubtractPoints(vector<double> point1, vector<double> point2) {
    vector<double> resultPoint(point2.size());
    for (int i = 0; i < resultPoint.size(); ++i) {
        resultPoint[i] = point2[i] - point1[i];
    }
    return resultPoint;
}

vector<double> fnLMGetPointAtTime(vector<double> point, vector<double> velocity, double time) {
    vector<double> retPoint(velocity.size());
    for (int i = 0; i < retPoint.size(); ++i) {
        retPoint[i] = point[i] + time * velocity[i];
    }

    return retPoint;
}

double fnLMGetDistanceBetweenPointsAtTime(vector<double> point1, vector<double> velocity1,
                                        vector<double> point2, vector<double> velocity2, double time) {

    vector<double> finalPoint1 = fnLMGetPointAtTime(point1, velocity1, time);
    vector<double> finalPoint2 = fnLMGetPointAtTime(point2, velocity2, time);
    vector<double> distanceBetweenPointsVector  = fnLMSubtractPoints(finalPoint1, finalPoint2);
    double distanceBetweenPoints = fnLMLengthOfVector(distanceBetweenPointsVector);

    return distanceBetweenPoints;

}

int main()
{

    double time = -10.0;
    double timeIncrement = 0.01;
    double maxTime = 10.0;

    vector<double> sPoint = {2,0,5};
    vector<double> sVelocity = {4,-2,-6};

    vector<double> rPoint = {4,-1,5};
    vector<double> rVelocity = {-2,1,2};

    double lowestDistance = 999999999;

    cout << "Distance Between Points\t\tTime" << endl;
    cout << "----------------------------------------" << endl;
    do {
        double distanceBetweenPoints = fnLMGetDistanceBetweenPointsAtTime(sPoint, sVelocity, rPoint, rVelocity, time);

        if (lowestDistance > distanceBetweenPoints) {
            lowestDistance = distanceBetweenPoints;
        }

        cout << to_string(distanceBetweenPoints) << "\t\t\t" << to_string(time) << endl;
        time += timeIncrement;
    } while (time <= maxTime);

    cout << "Lowest Distance: " << endl;
    cout << to_string(lowestDistance) << endl;

    cout << "Lowest Distance Squared: " << endl;
    cout << to_string(lowestDistance*lowestDistance) << endl;
    return 0;
}
