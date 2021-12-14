#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// MyForm 摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			findPorts();





			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^ serialPort;
	protected:

	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::ComponentModel::IContainer^ components;

	protected:











	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(95, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"請選擇端口：";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 12);
			this->label2->TabIndex = 2;
			this->label2->Text = L"請設置包率：";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"9600", L"115200" });
			this->comboBox2->Location = System::Drawing::Point(95, 48);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 20);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(269, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Init Port";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(269, 45);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close Port";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 179);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(330, 21);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"Received Here";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 215);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(330, 21);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Enter Here";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(14, 150);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"send";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(95, 150);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"read";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(107, 101);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 10;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(12, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 12);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Port status:";
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(391, 7);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(323, 406);
			this->listView1->TabIndex = 12;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 12;
			this->listBox1->Location = System::Drawing::Point(12, 266);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(332, 148);
			this->listBox1->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 425);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//find port function
	private: void findPorts(void)
	{
		array<Object^>^ objectArray = SerialPort::GetPortNames();
		this->comboBox1->Items->AddRange(objectArray);
	}



	private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//close serialPort
	this->serialPort->Close();
	// update progress bar
	this->progressBar1->Value = 0;
	// Enable read button
	this->button2->Enabled = true;
	// Enable the init button
	this->button3->Enabled = true;
	// ovalShape
	//this->ovalShape1->FillColor = Color::Red;
}
	   //init port
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//clear textBox2
	this->textBox2->Text = String::Empty;
	//if port haven't been chosen 
	if (this->comboBox1->Text == String::Empty || this->comboBox2->Text == String::Empty)
		this->textBox1->Text = "Please Select Port Settings";
	else {  //port chosen
		try {
			// make sure port isn't open	
			if (!this->serialPort->IsOpen) {
				this->serialPort->PortName = this->comboBox1->Text;
				//this->textBox1->Text=this->comboBox1->Text;
				this->serialPort->BaudRate = Int32::Parse(this->comboBox2->Text);
				//this->textBox1->Text=this->comboBox2->Text;
				this->textBox1->Text = "Enter Message Here";
				//open serial port 
				this->serialPort->Open();
				this->progressBar1->Value = 100;
			}
			else
				this->textBox1->Text = "Port isn't openned";
		}
		catch (UnauthorizedAccessException^) {
			this->textBox1->Text = "UnauthorizedAccess";
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// check if port is ready for reading
	if (this->serialPort->IsOpen) {
		// Reset the text in the result label.
		this->textBox2->Text = String::Empty;

		// this will read manually
		try {
			this->textBox2->Text = this->serialPort->ReadLine();
		}
		catch (TimeoutException^) {
			this->textBox2->Text = "Timeout Exception";
		}
		// Disable the init button
		// the asynchronous operation is done.
		this->button2->Enabled = false;

		//this->ovalShape1->FillColor = Color::Green;
	}
	else
		// give error warning
		this->textBox2->Text = "Port Not Opened";


}


private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// add sender name
	String^ name = this->serialPort->PortName;
	// grab text and store in send buffer
	String^ message = this->textBox1->Text;
	// write to serial
	if (this->serialPort->IsOpen)
		//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
		this->serialPort->WriteLine(message);
	else
		this->textBox1->Text = "Port Not Opened";
}
};


}
