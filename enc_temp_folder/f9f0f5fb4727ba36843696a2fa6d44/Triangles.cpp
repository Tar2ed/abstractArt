#include "Triangles.hpp"

void Triangles::setup(){
}

void Triangles::update(){

}

void Triangles::draw(){
    
	ofSetColor(160,30,144);
	ofDrawTriangle(200, 300, 100, 250, 300, 150);

	ofSetColor(30, 97, 222);
	ofDrawTriangle(868, 536, 455, 555, 639, 745);

}
