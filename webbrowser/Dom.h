//Eine DOM-Implementierung

#pragma once

#include <vector>
#include "DomNode.h"

class Dom {
public:
	std::vector<DomNode*> childNodes;

	~Dom() {
		for (auto& node : this->childNodes) {
			delete node;
		}
	}
};
