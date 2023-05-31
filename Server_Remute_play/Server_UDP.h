#pragma once
#include"MyForm.h"
#include<windows.h>
#include<iostream>


using namespace System::Net;
using namespace System::Net::Sockets;


using namespace System::Drawing;
using namespace System::IO;

// Создаем UDP сервер на порту 1234
namespace UDP_Serv {
	
	//void otpravka() {
	//	UdpClient^ udpServer = gcnew UdpClient(1234);
	//	IPEndPoint^ remoteEP = gcnew IPEndPoint(IPAddress::Any, 0);

	//	// Создаем Bitmap
	//	Bitmap^ bitmap = gcnew Bitmap("image.bmp");
	//	MemoryStream^ stream = gcnew MemoryStream();
	//	bitmap->Save(stream, System::Drawing::Imaging::ImageFormat::Bmp);
	//	array<Byte>^ bitmapBytes = stream->ToArray();

	//	// Отправляем массив байт клиенту
	//	udpServer->Send(bitmapBytes, bitmapBytes->Length, remoteEP);
	//}
}
