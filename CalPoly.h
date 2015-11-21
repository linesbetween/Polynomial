/*CIT237 Polynomial
/*Hanfei XU
*/

/*Calculate between two Polys.
* poly1 calls searcher for each terms in it.
* searcher search through poly2 for the same type of term
* if term of same type found, return it.
* if not found, return term of value 0.
* calculate 
*/


#include "Term.h"
#include "Poly.h"
#include <iostream>
#include <vector>
using namespace std;

void searcher(Poly&, const Term term1);
                                    
Poly CalPoly(Poly poly1, Poly poly2){
	Poly result;
	vector <Term>termVec1 = poly1.getTermVec();
	vector<Term>::iterator iter1;
	//Search through poly1's vector, for the same term in poly2
	for (iter1 = termVec1.begin(); iter1 < termVec1.end(); iter1++){
		Term found = searcher(poly2);
		if (found.coef != 0 || found.letter != 0) {//if returned Term is not of 0 value
			result.insertTerm(found);// insert found term into result's vector
			poly1.eraseTerm(iter1);// erase the term of same type from poly1's vector
		}
		
	}

	//connect unerased terms from each poly with terms in result
	result.concatenateTerms(poly1.getTermVec);
	result.concatenateTerms(poly2.getTermVec);
	
	return result;
}

void sorter(Poly& poly){

}

Term searcher(Poly& poly2 /*vector <Term>::iterator &it*/){
	Term found;

	vector <Term>termVec2 = poly2.getTermVec();
	vector <Term>::iterator iter2
	for (iter2 = termVec2.begin(); iter2< termVec2.end(); iter2++){
		 //TODO
		// Search through poly2' vector of term for the same term as passed-in term1
		//if found, assign it to "found", erase the term from poly2's vector.
		//assign current iter to passed-in inter2; iter2=it;
	}
	return found;
}
