//Eine DOM-Knote

#pragma once

class DomNode {
public:
	enum Type {
		ElementNode,
		TextNode,
	};

private:
	Type type;

public:
	DomNode(Type type) : type(type) {};
};
