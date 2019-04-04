//
// Created by turpster on 4/4/19.
//

#include "window.h"
#include <GLFW/glfw3.h>
#include <string>

namespace knight
{
    Window::Window(unsigned short width, unsigned short height, const std::string& title, void (*main_loop) ())
    {
        this->window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);

        if (main_loop != nullptr)
        {
            this->main_loop = main_loop;
        }
    }

    void Window::loop()
    {
        while (is_open())
        {
            this->main_loop();
        }
    }


    bool Window::is_open() {
        return glfwWindowShouldClose(this->window);
    }
}