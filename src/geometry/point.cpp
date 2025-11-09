#include "point.h"
#include "vector.h"
#include <sstream>

Point2f MakeP2f(float x, float y)
{
    return{x ,y} ;
} // cette fonction retourne un point de coordonner x,y
Point2f Translate(const Point2f& p, float dx, float dy)
{
    Point2f r; // pour retourner les nouvelles coordonnees du nouveau point deplacer
    r.x = p.x + dx; // deplace l'abscisse du point
    r.y = p.y + dy; // deplace l'ordonne du point

    return r;
}
Point2f Translate(const Point2f& p, const Vector2f& v)
{
    Point2f r; // pour retourner les nouvelles coordonnees du nouveau point deplacer
    r.x = p.x + v.x ;
    r.y = p.y + v.y ;

    return r;
}// fais la translation d'un point a partir des coordonnees d'un vecteur

Point2f Scale(const Point2f& p, float sx, float sy)
{
    Point2f r;
    r.x = p.x * sx ; // on multiplie avec le facteur d'agrandissement ou de retrecissement en abscisse
    r.y = p.x * sy; // on fait de meme pour l'ordonnee

    return r; // retourne le nouveau point qui a ete transforme
}// cette fonction fait l'homothetie d'un point a partir d'un facteur quelconque

Point2f Scale(const Point2f& p, const Vector2f& s)
{
    Point2f r ;
    r.x = p.x * s.x ;
    r.y = p.y * s.y ;

    return r;
}// cette fonction fait l'homothetie d'un point a partir des coordonnes d'un vecteur comme facteur d'agrandissement ou de reduction

Point2f Rotate(const Point2f& p, float angleDegree)
{
    Point2f r; // on sait que le point p a pour coordonnee (x,y) on va le multiplier avec une matrice trigonometrique
    float angleRad = angleDegree*( 3.14/ 180) ; // car les fonctions trigonometriques de la fonction <cmath> fonctionne en radian , raison pour laquelle l'angle entree par l'utilisateur doit etre convertit en radian

    r.x = p.x * cos(angleRad) - p.y * sin(angleRad) ;
    r.y = p.y * sin(angleRad) + p.y * cos(angleRad) ;

    return r;
}
std::string ToString(const Point2f& p)
{
    std::ostringstream oss;// pour les affichages
    oss << "(" << p.x << "," << p.y << ")" ; // pour que ca puisse afficher de cette maniere (x,y)

    return oss.str(); // on met str pour recuperer l'ensemble des chaines de caractere
}