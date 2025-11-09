#include "geometry/point.h"
#include "geometry/vector.h"
#include "geometry/utils.h"

int main() {
    Point2f p = MakeP2f(2.0f, 3.0f);
    Print("Point:", ToString(p));

    Vector2f v = MakeV2f(1.0f, -1.0f);
    Print("vecteur:", ToString(v));

    Point2f p2 = Translate(p, v);
    Print("Translated by vector:", ToString(p2));

    Point2f p3 = Translate(p, 3.2 , 4.0);
    Print("translated by point:", ToString(p3));

    Point2f p4 = Scale(p , 3.0, 4.0) ;
    Print( "produit scalaire: ", ToString(p4)) ;

    Point2f p5 = Scale(p , v) ;
    Print("produit scalaire par vecteur:", ToString(p5));

    Point2f p6 = Rotate(p , 30.0) ;
    Print("la rotation:", ToString(p6)) ;

    Print("\noperations sur vecteurs maintenant:\n") ;

    Point2f a1 = MakeP2f(2.0f, 3.0f) ;
    Point2f b1 = MakeP2f(5.0f, 2.0f) ;
    Vector2f v1 = MakeV2f (a1, b1) ;
    Print("premier vecteur:", ToString(v1));

    Vector2f a2 = MakeV2f (2.0f, 1.0f) ;
    Print("second vecteur:", ToString(a2));
    
    Vector2f v2 = Add(a2, v1) ;
    Print("l'addition des vecteurs:", v2);

    Vector2f v3 = Sub(a2, v1) ;
    Print("la soustraction de ces vecteurs:", v3);

    Vector2f v4 = Scale(a2, 3.0);
    Print("l'homothetie:", v4) ;

    float c = Dot(a2, v1) ;
    Print("le produit scalaire donne:", c);

    float d = Length(a2);
    Print("la norme du vecteur est:", d);

    Vector2f v5 = Normalize(a2);
    Print("la normalize:", v5);

    Vector2f v6 = Lerp(a2, v1, 0.3);
    Print("l'interpolation lineaire:", v6);

    float e = Determinant(a2, v1); 
    Print("le determinant:", e);

    return 0;
}
