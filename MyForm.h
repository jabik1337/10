#pragma once

namespace Project15 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	// Структура для збереження інформації про студента
	public value struct Student {
		String^ PIP;
		int Kurs;
		String^ Grupa;
		double Stipendia;
	};

	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		// Динамічний список для збереження масиву студентів
		List<Student>^ studentsList = gcnew List<Student>();

	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

		// Оголошення всіх елементів форми
	private: System::Windows::Forms::TextBox^ textBox1; // ПІП
	private: System::Windows::Forms::TextBox^ textBox2; // Курс
	private: System::Windows::Forms::TextBox^ textBox3; // Група
	private: System::Windows::Forms::TextBox^ textBox4; // Стипендія
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;  // Кнопка ДАННІ
	private: System::Windows::Forms::Button^ button2;  // Кнопка Вивести
	private: System::Windows::Forms::ListBox^ listBox1; // Поле виводу результату

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// textBox1 (ПІП)
			// 
			this->textBox1->Location = System::Drawing::Point(140, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 22);
			// 
			// textBox2 (Курс)
			// 
			this->textBox2->Location = System::Drawing::Point(140, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 22);
			// 
			// textBox3 (Група)
			// 
			this->textBox3->Location = System::Drawing::Point(140, 110);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(180, 22);
			// 
			// textBox4 (Стипендія)
			// 
			this->textBox4->Location = System::Drawing::Point(140, 150);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(180, 22);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(20, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->Text = L"ПІП студента:";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(20, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->Text = L"Курс:";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(20, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 23);
			this->label3->Text = L"Група:";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(20, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->Text = L"Стипендія:";
			// 
			// button1 (ДАННІ)
			// 
			this->button1->Location = System::Drawing::Point(350, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 30);
			this->button1->Text = L"ДАННІ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2 (ВИКОНАТИ / ВИВЕСТИ)
			// 
			this->button2->Location = System::Drawing::Point(140, 200);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 45);
			this->button2->Text = L"виконати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(350, 70);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(360, 180);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(740, 290);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Завдання 10: Студенти без стипендії";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// Логіка кнопки "ДАННІ" — зчитує з полів та додає у список
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox4->Text == "") {
				MessageBox::Show("Будь ласка, заповніть усі поля перед додаванням!");
				return;
			}

			Student newStudent;
			newStudent.PIP = textBox1->Text;
			newStudent.Kurs = Convert::ToInt32(textBox2->Text);
			newStudent.Grupa = textBox3->Text;
			newStudent.Stipendia = Convert::ToDouble(textBox4->Text);

			studentsList->Add(newStudent);

			// Очищення полів для швидкого введення наступного студента
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox4->Text = "";

			MessageBox::Show("Дані успішно збережено в масив!");
		}
		catch (...) {
			MessageBox::Show("Помилка формату! Перевірте правильність введення Курсу (ціле число) та Стипендії.");
		}
	}

		   // Логіка кнопки "виконати" — фільтрує масив і виводить тих, у кого стипендія == 0
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		listBox1->Items->Add("Студенти, які НЕ отримують стипендію:");
		listBox1->Items->Add("========================================");

		bool found = false;

		for (int i = 0; i < studentsList->Count; i++) {
			// Перевірка умови завдання (якщо стипендія дорівнює 0)
			if (studentsList[i].Stipendia == 0) {
				String^ row = String::Format("{0} | Курс: {1} | Група: {2}",
					studentsList[i].PIP, studentsList[i].Kurs, studentsList[i].Grupa);
				listBox1->Items->Add(row);
				found = true;
			}
		}

		if (!found) {
			listBox1->Items->Add("Студентів із нульовою стипендією не знайдено.");
		}
	}
	};
}