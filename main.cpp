#include <GL/glew.h>
#include <GLFW/glfw3.h>
const char* a="#version 330 core\nin vec3 a;void main(){gl_Position=vec4(a,1);}";
const char* b="#version 330 core\nvoid main(){gl_FragColor=vec4(1);}";
int main(){glfwInit();GLFWwindow*c=glfwCreateWindow(800,800,"",0,0);glfwMakeContextCurrent(c);glewInit();
GLuint d=glCreateShader(0x8B31);glShaderSource(d,1,&a,0);glCompileShader(d);
GLuint e=glCreateShader(0x8B30);glShaderSource(e,1,&b,0);glCompileShader(e);
GLuint f=glCreateProgram();glAttachShader(f,d);glAttachShader(f,e);glLinkProgram(f);glDeleteShader(d);glDeleteShader(e);
GLfloat g[]={-.5,-.5,0,.5,.5,-.5};GLuint h;glGenBuffers(1,&h);glBindBuffer(0x8892,h);glBufferData(0x8892,24,g,0x88E4);
glEnableVertexAttribArray(0);glVertexAttribPointer(0,2,0x1406,0,8,0);
while(!glfwWindowShouldClose(c)){glClear(0x00004000);glUseProgram(f);glDrawArrays(0x0004,0,3);glfwSwapBuffers(c);glfwPollEvents();}
glDeleteProgram(f);glDeleteBuffers(1,&h);glfwDestroyWindow(c);glfwTerminate();}
