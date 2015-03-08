#include "icon.h"

Icon::Icon(float x, float y, float width, float height, GLuint tex) {
	setX(x);
	setY(y);
	setWidth(width);
	setHeight(height);
	setTexture(tex);
	text = "";
}

Icon::Icon(float x, float y, float width, float height, GLuint tex, short id) {
	setX(x);
	setY(y);
	setWidth(width);
	setHeight(height);
	setTexture(tex);
	ID = id;
}

Icon::Icon(float x, float y, float width, float height, GLuint tex, short id, std::string iconText) {
	setX(x);
	setY(y);
	setWidth(width);
	setHeight(height);
	setTexture(tex);
	text = iconText;
	ID = id;
}

std::string Icon::getText() {
	return text;
}

void Icon::setText(std::string newText) {
	text = newText;
}

short Icon::getID(){
	return ID;
}


