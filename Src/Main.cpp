#include <GLFW/glfw3.h>

#include <iostream>

int main(void) {
  GLFWwindow* Window;

  if (!glfwInit()) {
    std::cerr << "Error while Initializing GLFW";
    return -1;
  }

  Window = glfwCreateWindow(1366, 768, "ProjectOrbitV0.3", NULL, NULL);
  if (!Window) {
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(Window);

  // glColor4f(0.56078f, 0.85098f, 0.98431f, 1.0f);
  // GLFW Properties
  glClearColor(0.56078f, 0.85098f, 0.98431f, 1.0f);

  while (!glfwWindowShouldClose(Window)) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glfwSwapBuffers(Window);
    glfwPollEvents();
  }

  glfwTerminate();

  return 0;
}