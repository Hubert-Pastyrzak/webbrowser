//Eine DOM-Text-Knote

#pragma once

#include "DomNode.h"
#include <string>

class DomTextNode : public DomNode {
private:
	std::wstring text;

public:
	DomTextNode(const wchar_t* text)
		: DomNode(DomNode::Type::TextNode)
		, text(text)
	{};
};
