#pragma once
#include "string_include.h"
#include <iostream>

// !animate(): animate(string) = endline ::: animate(string,int) = stay on lineS

void animate(std::string text)
{
    int in_text_sleep_time = 50;
    int end_line_sleep_time = 500;
    for (int i = 0; i < text.length(); i++)
    {
        std::cout << text[i]; 
        Sleep(in_text_sleep_time);
    }
    std::cout << std::endl;
    Sleep(end_line_sleep_time);
}

void animate(std::string text, int end_line)
{
    int in_text_sleep_time = 50; 
    for (int i = 0; i < text.length(); i++)
    {
        std::cout << text[i]; 
        Sleep(in_text_sleep_time);
    }
    Sleep(in_text_sleep_time);
}