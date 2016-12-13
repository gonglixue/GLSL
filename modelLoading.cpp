#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

#include <GLEW\glew.h>
#include <glm\glm.hpp>
#include <glm\gtc\matrix_transform.hpp>

#include "Shader.h"

using namespace std;

struct Vertex {
	glm::vec3 Position;
	glm::vec3 Normal;
	glm::vec2 TexCoords;
};

struct Texture {
	GLuint id;
	string type;
	string path;
};

class Mesh {
public:
	/* Mesh Data */
	vector<Vertex> vertices;
	vector<GLuint> indices;
	vector<Texture> textures;

	// Constructor
	Mesh(vector<Vertex> vertices, vector<GLuint> indices, vector<Texture> textures)
	{
		this->vertices = vertices;
		this->indices = indices;
		this->textures = textures;

		this->setupMesh();
	}

	// render the mesh
	void Draw(Shader shader)
	{

	}
private:
	GLuint VAO, VBO, EBO;
	// initializes all the buffer objects/arrays
	void setupMesh()
	{

	}
};