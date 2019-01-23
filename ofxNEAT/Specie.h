#pragma once

#include "ofMain.h"
#include "Genome.h"

class Specie {

public:

	unsigned int getFittest() {
		float highestFitnes = 0;
		for (int i = 0; i < genomes.size(); i++) {
			highestFitnes = fmax(highestFitnes, genomes[i].getFitness());
		}
	}
private:
	vector<Genome> genomes;
	unsigned int numGenomes;
	Genome performCrossover(Genome a, Genome b);
	bool checkForSpeciation(Genome a, Genome* species);

};