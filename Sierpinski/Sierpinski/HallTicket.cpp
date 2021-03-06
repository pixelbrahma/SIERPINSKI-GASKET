// Two-Dimensional Sierpinski Gasket       
// Generated using randomly selected vertices and bisection

/*#include "Angel.h"

const int NumPoints = 31;

//----------------------------------------------------------------------------

void
init(void)
{

	vec2 points[NumPoints];

	// Specifiy the vertices for a triangle
	vec2 vertices[] = {
		vec2(-0.1, 0.0), vec2(-0.1, 0.1),vec2(-0.1, 0.2), vec2(-0.1, 0.3),
		vec2(-0.1, -0.1), vec2(-0.1, -0.2),vec2(-0.1, -0.3),
		vec2(-0.2, 0.3), vec2(-0.3, 0.3), vec2(-0.4, 0.3),
		vec2(-0.2, -0.3), vec2(-0.3, -0.3), vec2(-0.4, -0.3),
		vec2(-0.1, 0.0), vec2(-0.2, 0.0), vec2(-0.3, 0.0),
		vec2(0.2, 0.0), vec2(0.2, 0.1), vec2(0.2, 0.2),
		vec2(0.2, 0.3), vec2(0.2, -0.1), vec2(0.2, -0.2), vec2(0.2, -0.3),
		vec2(0.3, -0.3), vec2(0.4, -0.3), vec2(0.5, -0.3), vec2(0.6, -0.3),
		vec2(0.45, -0.2), vec2(0.45, -0.1), vec2(0.45, -0.4), vec2(0.45, -0.5)
	};

	// Select an arbitrary initial point inside of the triangle

	// compute and store N-1 new points
	for (int i = 0; i < NumPoints; ++i) {
		//int j = rand() % 3;   // pick a vertex at random

		// Compute the point halfway between the selected vertex
		//   and the previous point
		points[i] = vertices[i];
	}

	// Create a vertex array object
	GLuint vao;
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	// Create and initialize a buffer object
	GLuint buffer;
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(points), points, GL_STATIC_DRAW);

	// Load shaders and use the resulting shader program
	GLuint program = InitShader("vshader21.glsl", "fshader21.glsl");
	glUseProgram(program);

	// Initialize the vertex position attribute from the vertex shader
	GLuint loc = glGetAttribLocation(program, "vPosition");
	glEnableVertexAttribArray(loc);
	glVertexAttribPointer(loc, 2, GL_FLOAT, GL_FALSE, 0,
		BUFFER_OFFSET(0));

	glClearColor(0.0, 0.0, 0.0, 0.0); // white background
}

//----------------------------------------------------------------------------

void
display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);     // clear the window
	glPointSize(100.0);
	glDrawArrays(GL_POINTS, 0, NumPoints);    // draw the points
	glFlush();
}

//----------------------------------------------------------------------------

void
keyboard(unsigned char key, int x, int y)
{
	switch (key) {
	case 033:
		exit(EXIT_SUCCESS);
		break;
	}
}

//----------------------------------------------------------------------------

int
main(int argc, char **argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(512, 512);

	// If you are using freeglut, the next two lines will check if
	// the code is truly 3.2. Otherwise, comment them out

	glutInitContextVersion(3, 1);
	glutInitContextProfile(GLUT_CORE_PROFILE);

	glutCreateWindow("Hall Ticket Number ");




	glewInit();

	init();

	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);

	glutMainLoop();
	return 0;
}
*/