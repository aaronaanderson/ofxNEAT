#pragma once

#include "ofMain.h"
#include "Gene.h"

class Genome {

public:

private:
	void createInitialGenome(unsigned int numInputs, unsigned int numOutputs);
	float checkFitness();
	float* calculateOutputs(float* inputs);
	float explicitSharingFunction(float unalteredFitness);
	void drawGenome();

	vector<Gene> genes;
	unsigned int numLayers = 2;
	vector<unsigned int> numNodesInLayer;

	float fitness;

	inline float performSigmoid(float input) {
		return 1 / (1.0f + exp(-input));
	}
};