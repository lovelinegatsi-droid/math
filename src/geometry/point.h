#ifndef POINT_H
#define POINT_H
struct Vector2f ;

#include <string>
#include "vector.h"

struct Point2f {
    float x;
    float y;
};
Point2f MakeP2f(float x, float y); // pou la creation du point
Point2f Translate(const Point2f& p, float dx, float dy); // pour la translation du point a partir de d'autre coordonner 
Point2f Translate(const Point2f& p, const Vector2f& v); // pour la translation du point a partir d'un vecteur
Point2f Scale(const Point2f& p, float sx, float sy); // pour l'homothetie du point 
Point2f Scale(const Point2f& p, const Vector2f& s); //pour l'homothetie a travers les cordonnees d'un vecteur
Point2f Rotate(const Point2f& p, float angleDegree); // pour la rotation du point 
std::string ToString(const Point2f& p); // pour afficher le point 
#endif // POINT_H