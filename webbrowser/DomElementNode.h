//Eine DOM-Element-Knote

#pragma once

#include "DomNode.h"
#include <string>
#include <map>
#include <vector>

class DomElementNode : public DomNode {
public:
	std::wstring name;
	std::map<std::wstring, std::wstring> attributes;

	std::vector<DomNode*> childNodes;

	DomElementNode(const wchar_t* name)
		: DomNode(DomNode::Type::ElementNode)
		, name(name)
	{};

	~DomElementNode() {
		for (auto& node : this->childNodes) {
			delete node;
		}
	}
};
