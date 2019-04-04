//
// Created by turpster on 4/4/19.
//
#pragma once

#include <string>
#include <GLFW/glfw3.h>


namespace knight {
    class Window {
        void (*main_loop) ();

    public:
        Window(unsigned short width, unsigned short height, const std::string& title, void (*main_loop) ()=nullptr);
        bool is_open();
    protected:
        void loop();
    private:
        GLFWwindow *window;
    };
}