#pragma once
#include"MyForm.h"
#include<windows.h>
#include<iostream>


using namespace System::Net;
using namespace System::Net::Sockets;


using namespace System::Drawing;
using namespace System::IO;

// ������� UDP ������ �� ����� 1234
namespace UDP_Serv {
	
	//void otpravka() {
	//	UdpClient^ udpServer = gcnew UdpClient(1234);
	//	IPEndPoint^ remoteEP = gcnew IPEndPoint(IPAddress::Any, 0);

	//	// ������� Bitmap
	//	Bitmap^ bitmap = gcnew Bitmap("image.bmp");
	//	MemoryStream^ stream = gcnew MemoryStream();
	//	bitmap->Save(stream, System::Drawing::Imaging::ImageFormat::Bmp);
	//	array<Byte>^ bitmapBytes = stream->ToArray();

	//	// ���������� ������ ���� �������
	//	udpServer->Send(bitmapBytes, bitmapBytes->Length, remoteEP);
	//}
}
