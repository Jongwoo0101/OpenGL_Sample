#include <glut.h>
#include <iostream>


#define GL_SILENCE_DEPRECATION

GLfloat vertices[] = {
        -0.5f, -0.5f, 0.0f, // 왼쪽 아래
        0.5f, -0.5f, 0.0f, // 오른쪽 아래
        0.0f,  0.5f, 0.0f  // 위
};

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0f, 0.0f, 0.0f); // 빨간색

    // 삼각형 그리기
    glBegin(GL_TRIANGLES);
    glVertex3fv(vertices);
    glVertex3fv(vertices + 3);
    glVertex3fv(vertices + 6);
    glEnd();

    glFlush();
}

void reshape(int width, int height) {
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1, 1, -1, 1);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowSize(800, 600);
    glutCreateWindow("OpenGL Example");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMainLoop();
    return 0;
}