#pragma once

struct Connection {
	unsigned int outputNode;
	unsigned int inputNode;
	float weight;
	bool enabled;
};

//the terms Gene and node are interchangeable in this context
class Gene {

public:

	float getNodeValue() {
		return nodeValue;
	}
private:
	float nodeValue;
	float bias;
	unsigned int nodeIdentity;
	unsigned int localAge;
	bool enabled;//I don't think this is needed (DELETE)
	vector<Connection> outwardConnections;
	vector<&Connection> inwardConnections;

};