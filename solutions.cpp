#include "reclists.hpp"
#include "solutions.hpp"

// As you implement functions in this file, you should add the
// function-prototype to the solutions.hpp. The function-prototypes
// for append and reverse are already in solutions.hpp.


int numNodesAtTheTopLevel(list p) {
    // p is one of
    //    a null list
    //    an atom
    //    a recursive list

    // The function returns the number of nodes at the top-level
    // of p.

    if( is_null(p) )
        return 0;
    if( is_atom(p) )
        return 1;
    return 1 + numNodesAtTheTopLevel(cdr(p));
}

int numAtomsAtTheTopLevel(list p)
{
    if(is_null(p)){
        return 0;
    }

    if(is_atom(car(p))){
        return 1 + numAtomsAtTheTopLevel(cdr(p));
    }

    return numAtomsAtTheTopLevel(cdr(p));

}

bool find(list p, list q){
   if(is_null(p)){
       return false;
   }

  if(eq(car(p),q)){
      return true;
  }

  return find(cdr(p),q);

}

bool areEqual(list p, list q){
    if(is_null(p)){
        return true;
    }

    if(!eq(car(p), car(q))){
        return false;
    }

    return areEqual(cdr(p), cdr(q));

}

bool evenNumberOfAtoms(list p){
    if(is_null(p)){
        return true;
    }
    if(is_null(cdr(p))){
      return false;
    }

    return (evenNumberOfAtoms(cdr(cdr(p))));


}

bool everyOtherAtom(list p, list q){
    if(is_null(p)){
        return true;
    }
    if(is_null(q))
    {
        return false;
    }

    if(!eq(car(p),car(cdr(q)))){
        return false;
    }

    return everyOtherAtom(cdr(p),cdr(cdr(q)) );



}


