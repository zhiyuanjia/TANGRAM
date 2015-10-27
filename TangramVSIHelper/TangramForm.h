#pragma once

namespace TangramVSIHelper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// TangramForm 摘要
	/// </summary>
	public ref class TangramForm : public System::Windows::Forms::Form
	{
	public:
		TangramForm(void)
		{
			m_strTangramXML = nullptr;
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	private: System::Windows::Forms::Panel^  TangramPanel;
	public:

		String^ m_strTangramXML;
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~TangramForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->TangramPanel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// TangramPanel
			// 
			this->TangramPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->TangramPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->TangramPanel->Location = System::Drawing::Point(0, 0);
			this->TangramPanel->Name = L"TangramPanel";
			this->TangramPanel->Size = System::Drawing::Size(763, 571);
			this->TangramPanel->TabIndex = 0;
			// 
			// TangramForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 571);
			this->Controls->Add(this->TangramPanel);
			this->Name = L"TangramForm";
			this->Text = L"TangramForm";
			this->Load += gcnew System::EventHandler(this, &TangramForm::TangramForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		void ShowTangram();
	private: System::Void TangramForm_Load(System::Object^  sender, System::EventArgs^  e);
	};
}
