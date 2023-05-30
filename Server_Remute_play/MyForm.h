#pragma once
#include "Screen_Сonclusion.h"
#include <Windows.h>
#include <iostream>

namespace ServerRemuteplay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(275, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(748, 485);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(257, 46);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Запуск трансляции на экран";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 410);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 365);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"FPS";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1035, 509);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Timer^ timer = gcnew Timer();
		Bitmap^ screenshot;
		Graphics^ gfxScreenshot;

		int frame_count = 0;
		DateTime lastTime;
		TimeSpan elapset;
		int fps = 0;

		void Bitmap_create() {
			int screen_width = GetSystemMetrics(SM_CXSCREEN); // User32.lib - билиотека зависимостей
			int screen_height = GetSystemMetrics(SM_CYSCREEN);
			screenshot = gcnew Bitmap(screen_width, screen_height);
			gfxScreenshot = Graphics::FromImage(screenshot);
		}
		
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			timer->Interval = 33; // 1 секунда
			Bitmap_create();
			// Подписываемся на событие тика таймера
			timer->Tick += gcnew EventHandler(this, &MyForm::timer1_Tick);
			// Запускаем таймер
			timer->Start();
		}
			   
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
			scv::screen_Bitmap(this->label1, this->pictureBox1, timer, gfxScreenshot, screenshot);
			frame_count++;
			elapset = DateTime::Now - lastTime;
			if (elapset.TotalSeconds >= 1.0) {
				fps = frame_count / elapset.TotalSeconds;
				label2->Text = "FPS: " + System::Convert::ToString(fps);
				frame_count = 0;
				lastTime = DateTime::Now;
			}
		}
		void lol() {
			// Освободить ресурсы
			delete gfxScreenshot;
		}
};
}
