#ifndef GLF_SAMPLE_INCLUDED
#define GLF_SAMPLE_INCLUDED

#include <glf/window.hpp>

class sample : public glf::window
{
public:
	sample(
		std::string const & Name, 
		glm::ivec2 const & WindowSize,
		glm::uint32 VersionMajor,
		glm::uint32 VersionMinor);
	virtual ~sample();

	virtual bool check() const;
    virtual bool begin(const glm::ivec2& WindowSize);
    virtual bool end();
    virtual void render();

private:
	bool initProgram();
	bool initArrayBuffer();
	bool initTexture2D();
	bool initFramebuffer();
	bool initVertexArray();

	void renderScene(glm::vec4 const & ClearColor, glm::mat4 const & MVP, GLuint TextureName);

	GLuint VertexArrayName;
	GLuint ProgramName;

	GLuint BufferName;
	GLuint Texture2DName;
	GLuint ColorbufferName;
	GLuint FramebufferName;

	GLuint UniformMVP;
	GLuint UniformDiffuse;
};

#endif//GLF_SAMPLE_INCLUDED
