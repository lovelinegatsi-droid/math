#ifndef VECTOR_H
#define VECTOR_H
struct Point2f ;

#include "point.h"
#include <string>
#include <cmath>

struct Vector2f {
    float x;
    float y;
};

Vector2f MakeV2f(float x, float y); // pour declarer un vecteur de coordonnees reels
Vector2f MakeV2f(const Point2f& a, const Point2f& b); // pour delimiter le vecteur qui part du point a pour b
Vector2f Add(const Vector2f& a, const Vector2f& b); // pour additonner deux vecteurs
Vector2f Sub(const Vector2f& a, const Vector2f& b);// pour les soustraires
Vector2f Scale(const Vector2f& v, float scalar); //pour faire l'homothetie d'un vecteur (l'agrandir ou le reduire)
float Dot(const Vector2f& a, const Vector2f& b);// pour faire le produit scalaire des vecteurs
float Length(const Vector2f& v); // pour calculer la norme du vecteur
Vector2f Normalize(const Vector2f& v); // normaliser un vecteur
Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t);// permet de faire l'interpolation lineaire entre deux vecteurs
float Determinant(const Vector2f& a, const Vector2f& b);// calculer le determinant de deux vecteurs

std::string ToString(const Vector2f& v); //afficher le resultat
#endif//VECTOR_H