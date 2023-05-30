#pragma once
#include "MyForm.h";
#include <Windows.h>
#include <iostream>



using namespace System::Drawing;
using namespace System::Windows::Forms;


System::Windows::Forms::Screen;

namespace scv {

	void screen_Bitmap() {

		int screen_width = GetSystemMetrics(SM_CXSCREEN); // User32.lib - билиотека зависимостей
		int screen_height = GetSystemMetrics(SM_CYSCREEN);

		// Создаем Bitmap для хранения скриншота
		//Bitmap^ screenshot = gcnew Bitmap(screen_width, screen_height);

		// Создаем объект Graphics для рисования на Bitmap
		//Graphics^ gfxScreenshot = Graphics::FromImage(screenshot);

		// Сделать скриншот экрана и сохранить его в Bitmap
		//gfxScreenshot->CopyFromScreen(screenRect.Left, screenRect.Top, 0, 0, screenRect.Size);

		// Освободить ресурсы
		//delete gfxScreenshot;
		 
		 
		 
		 
		 
		//// Получаем размеры экрана
		//Rectangle screenRect = Screen::PrimaryScreen->Bounds;

		//// Создаем Bitmap для хранения скриншота
		//Bitmap^ screenshot = gcnew Bitmap(screenRect.Width, screenRect.Height);

		//// Создаем объект Graphics для рисования на Bitmap
		//Graphics^ gfxScreenshot = Graphics::FromImage(screenshot);

		//// Сделать скриншот экрана и сохранить его в Bitmap
		//gfxScreenshot->CopyFromScreen(screenRect.Left, screenRect.Top, 0, 0, screenRect.Size);

		//// Освободить ресурсы
		//delete gfxScreenshot;

		//// Получаем данные изображения в виде массива байтов
		//System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		//screenshot->Save(ms, System::Drawing::Imaging::ImageFormat::Bmp);
		//array<System::Byte>^ imageData = ms->ToArray();

		//// Освобождаем ресурсы
		//delete screenshot;
		//delete ms;

		// Делаем что-то с данными изображения

	}

}