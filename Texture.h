#ifndef TEXTURE_H
#define TEXTURE_H
#include "SDL.h"
#include "SDL_opengl.h"
#include "SDL_image.h"
#include <string>

class Texture
{
	public:
		Texture(const std::string &fileName, int xSize, int ySize);

		int getXSize();
		int getYSize();
		unsigned int getTexture();
		GLuint loadTexture( const std::string &fileName );

	private:
		int xSize;
		int ySize;
		unsigned int texture;
};

#endif