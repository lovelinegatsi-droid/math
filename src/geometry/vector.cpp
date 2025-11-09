#include "vector.h"
#include "point.h" // car ca manipule aussi les points
#include <sstream>

Vector2f MakeV2f(float x, float y)
{
    return {x, y};
}

Vector2f MakeV2f(const Point2f& a, const Point2f& b)
{
    Vector2f v;
    v.x = b.x - a.x ;
    v.y = b.y - a.y ;
    return v;
} // cette fonction sert a montrer qu'on cree un vecteur allant d'un point a vers un point b

Vector2f Add(const Vector2f& a, const Vector2f& b)
{
    Vector2f v;
    v.x = a.x + b.x ;
    v.y = a.y + b.y ;
    return v ;
} // on additionne juste les coordonnees des vecteurs entres

Vector2f Sub(const Vector2f& a, const Vector2f& b)
{
    Vector2f v;
    v.x = a.x - b.x ;
    v.y = a.y - b.y ;
    return v;
} // de meme ici, on soustrait juste les coordonnees des vecteurs entres

Vector2f Scale(const Vector2f& v, float scalar)
{
    Vector2f v1;
    v1.x = v.x * scalar ; // on multiplie l'abscisse par le reel entree par l'utilisateur
    v1.y = v.y * scalar ; // on multiplie l'ordonnee par ce meme reel

    return v1;
}

float Dot(const Vector2f& a, const Vector2f& b)
{
    float r ;
    Vector2f v;
    v.x= a.x * b.x ; // on multiplie les abscisses entre elles
    v.y = a.y * b.y ; // on fait de meme pour les ordonnees
    r = v.x + v.y ;
    return r;
} // c'est pour le produit scalaire

float Length(const Vector2f& v)
{
    float norme ; // qui est la variable a laquelle on affectera le resultat du calcul de la norme
    norme = std::sqrt((v.x * v.x) + (v.y * v.y)) ; //  on fait la racine du caree de l'abscisse par le carre de l'ordonne
    return norme ;
}// c'est pour calculer la norme

Vector2f Normalize(const Vector2f& v)
{
    Vector2f no = {0,0} ; // pour la contrainte null 
    float n = Length(v) ; // n est la variable qui recevra la valeur de la norme 
    Vector2f l; // nouveau vecteur obtenu apres qu'on les normaliser
     
    if (n == 0) return no; // car on ne peut pas diviser un nombre par 0
    else 
    {
        l.x = v.x / n ;
        l.y = v.y / n ;
    }
    return l ;
}// c'est pour normaliser le vecteur

Vector2f Lerp(const Vector2f& a, const Vector2f& b, float t)
{
    Vector2f no = {0,0} ;
    float dx, dy ; // les variables qui determinerons la distance des deux vecteurs
    Vector2f v; // qui est ou se trouvera le vecteur finale apres avoir fais l'interpolation

    dx = b.x - a.x ; // determine la distance sur les abscisse
    dy = b.y - a.y ; // determine cette distance sur les ordonnees 
    if ( t < 0 || t > 1) return no  ;
    v.x = a.x + t * dx ; // c'est a quel niveau se trouvera l'abscisse apres avoir additionner avec le rapport par la distance
    v.y = a.y + t * dy ; // le fais aussi pour l'ordonnee et le rapport est un float compris entre 0 et 1 bien evidemment ou encore en pourcentage
    // on additonne avec a pour dire que avance vers b d'un pourcentage t et on obtient une position (correspondant aux coordonnees du vecteur)
    return v ;

} //c'est l'interpolation lineaire, donc on avance d'un certains pourcentage d'un point vers un autre

float Determinant(const Vector2f& a, const Vector2f& b)
{
    float r;
    r = (a.x * b.y) - (a.y * b.x) ;

    return r;
}

std::string ToString(const Vector2f& v)
{
    std::ostringstream oss;
    oss << "(" << v.x << ", " << v.y << ")" ;

    return oss.str() ;
}