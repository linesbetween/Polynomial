/*CIT237 Polynomial 
/*Hanfei XU
*/

/*Polyn mainly contains a vector of Terms.
* Vector is more flexible with length than array. More functions to use too.
* Linked list might be a better option because it's more flexible with order.
* Constructor takes a string from input and processes it into array of terms.
*/

#ifndef POLY_H
#define POLY_H
#include "Term.h"
#include "InputProcess.h"
#include <iostream>
#include <vector>
using namespace std;

class Poly{
private:
	vector <Term> termVec;
	string input;

public:
	Poly(){

	}
	Poly(string inp){
		input = inp;
		setTermVec(input);
	}

	// call inputProcess to break string into vector of terms.
	void setTermVec(string input){
		termVec=inputProcess(input); 
		
	}

	void insertTerm(Term term){
		termVec.push_back(term);
	}

	void eraseTerm(Poly::iterator it){
		termVec.erase(it);
	}

	void concatenateTerms(vector <Term> newVec){

		termVec.insert(termVec.end(), newVec.begin(), newVec.end());

	}

	vector<Term> getTermVec(){
		return termVec;
	}




};


#endif