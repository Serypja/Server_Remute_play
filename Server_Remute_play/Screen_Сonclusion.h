#pragma once
#include "MyForm.h";
#include <Windows.h>
#include <iostream>



using namespace System::Drawing;
using namespace System::Windows::Forms;


System::Windows::Forms::Screen;

namespace scv {

	void screen_Bitmap() {

		int screen_width = GetSystemMetrics(SM_CXSCREEN); // User32.lib - ��������� ������������
		int screen_height = GetSystemMetrics(SM_CYSCREEN);

		// ������� Bitmap ��� �������� ���������
		//Bitmap^ screenshot = gcnew Bitmap(screen_width, screen_height);

		// ������� ������ Graphics ��� ��������� �� Bitmap
		//Graphics^ gfxScreenshot = Graphics::FromImage(screenshot);

		// ������� �������� ������ � ��������� ��� � Bitmap
		//gfxScreenshot->CopyFromScreen(screenRect.Left, screenRect.Top, 0, 0, screenRect.Size);

		// ���������� �������
		//delete gfxScreenshot;
		 
		 
		 
		 
		 
		//// �������� ������� ������
		//Rectangle screenRect = Screen::PrimaryScreen->Bounds;

		//// ������� Bitmap ��� �������� ���������
		//Bitmap^ screenshot = gcnew Bitmap(screenRect.Width, screenRect.Height);

		//// ������� ������ Graphics ��� ��������� �� Bitmap
		//Graphics^ gfxScreenshot = Graphics::FromImage(screenshot);

		//// ������� �������� ������ � ��������� ��� � Bitmap
		//gfxScreenshot->CopyFromScreen(screenRect.Left, screenRect.Top, 0, 0, screenRect.Size);

		//// ���������� �������
		//delete gfxScreenshot;

		//// �������� ������ ����������� � ���� ������� ������
		//System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
		//screenshot->Save(ms, System::Drawing::Imaging::ImageFormat::Bmp);
		//array<System::Byte>^ imageData = ms->ToArray();

		//// ����������� �������
		//delete screenshot;
		//delete ms;

		// ������ ���-�� � ������� �����������

	}

}