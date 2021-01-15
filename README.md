# Linear Algebra


[Sub Projects]

Linear Motion:

Concept

Linear motions are also known as vector equations where the direction vector is the velocity vector. The point and scalar of the direction vector remains simliar. The equation is in the form x = p + td, this should represent the linear motion of some object in a line as long as the components are known values and static, the span of this motion can increase to more than one dimension if there are components that are dynamic. This concept was asked in the first homework assignment question two in MATH 102 linear algebra course at UofA. One sub question asked was to find the value of a, a was the second component of the velocity vector in R^3, in the context of two linear motions visting the same point. For the value of a found it asked what was the time of the minimal distance between the two points, the two points never collided. It was found that a parabolic equation formed underneath a square root when finding the distance between the two points. The parabola has a vertex which was found to be above the x axis, this would mean the time of minimal distance was the value of time at the vertex. To check the answer this sub project was created to generate values of distance in respect to time of two linear motions. The relationship was in the form s(t) = r(t), functions s and t represent linear motions with respect to same value of time.

Functions

The length of the vector is calculated as the sqrt of the sum of all components squared. To find the distance vector there required a function to find the difference of two linear motions; inputs included the points, velocities and time. The linear motion calculates the point which the object is located at a given time, this calculation required another function. The fnLMGetDistanceBetweenPointsAtTime function is called within the main program and is the distance value used in the distance and time report.

Main Program

The main function initializes all the points and velocity vectors, and supporting variables used to calculate distance and time. These two values are reporting into the console, with a heading of "Distance Between Points" and "Time. When iterating through all values the lowest distance is put into a variable for later reporting. The loweset distance is the minimal distance. Both the loweset distance value and this valued squared are reported.
