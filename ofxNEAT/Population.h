#pragma once

#include "ofMain.h"
#include "Specie.h"

class Population {

public:

	Population(unsigned int numInputs, unsigned int numOutputs) {
		Specie temp(numInputs, numOutputs);
		species.push_back(temp);
	}

	unsigned int fittestGenome(){
		float highestFitness = 0;
		for (int i; i < species.size(); i++) {
			highestFitness = fmax(highestFitness, species[i].getFittest())
		}
	}

private:

	vector<Specie> species;
	unsigned int numSpecies;
	bool checkForSpeciation;
	unsigned long globalInovationNumber;
	unsigned int mostFitGenome;
};