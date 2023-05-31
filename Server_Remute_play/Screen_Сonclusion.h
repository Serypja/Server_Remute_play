#pragma once
#include "MyForm.h";
#include <Windows.h>
//#include <iostream>
#include <thread>
#include <tuple>

using namespace System::Drawing;
using namespace System::Windows::Forms;

//System::Windows::Forms::Screen;

namespace scv {
	int screen_width = 0;
	int screen_height = 0;

     void screen_Bitmap(Label^ label, PictureBox^ pictureBox1, Timer^ timer, Graphics^ gfxScreenshot, Bitmap^ screenshot) {
 
 	    screen_width = GetSystemMetrics(SM_CXSCREEN); // User32.lib - билиотека зависимостей
 	    screen_height = GetSystemMetrics(SM_CYSCREEN);
 	    label->Text = "Ширина: " + System::Convert::ToString(screen_width) + "\n" + "Высота: " + System::Convert::ToString(screen_height);
 
        //получение скриншёта экрана и запись в Bitmap
 	    gfxScreenshot->CopyFromScreen(0, 0, 0, 0, System::Drawing::Size(screen_width, screen_height));
 
 	    pictureBox1->Image = screenshot;
 	    pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
 
     }
}