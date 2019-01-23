#pragma once

struct Connection {
	unsigned int outputNode;
	float weight;
	bool enabled;
};

//the terms Gene and node are interchangeable in this context
class Gene {

public:

private:
	float nodeValue;
	float bias;
	unsigned int nodeIdentity;
	unsigned int localAge;
	bool enabled;//I don't think this is needed (DELETE)
	vector<Connection> outwardConnections;
	vector<unsigned int> inwardConnections;

};