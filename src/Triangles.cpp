#include "Triangles.hpp"
#include <random>

void Triangles::setup(){

	int c1 = rand();
	int c2 = rand();
	int c3 = rand();

	int x1 = rand();
	int x2 = rand();
	int x3 = rand();

	int y1 = rand();
	int y2 = rand();
	int y3 = rand();

}

void Triangles::update(){

}

void Triangles::draw(){
    

	ofSetColor(160,30,144);
	ofDrawTriangle(200, 300, 100, 250, 300, 150);

	ofSetColor(30, 97, 222);
	ofDrawTriangle(868, 536, 455, 555, 639, 745);

	//ofSetColor(self.c1, c2, c3);
	//ofDrawTriangle(x1, y1, x2, y3, x3, y3);

}
