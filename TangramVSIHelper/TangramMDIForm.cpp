#include "TangramMDIForm.h"
using namespace TangramCLR;

namespace TangramVSIHelper 
{
	void TangramMDIForm::ShowTangram()
	{
		this->Show();
	}

	System::Void TangramMDIForm::TangramMDIForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		Text = L"Tangram";
		TangramCLR::TangramCore^ pApp = TangramCore::GetTangramCore();
		Control^ pMDIClient = pApp->GetMDIClient(this);
		TangramCLR::Tangram^ pTangram = pApp->CreateTangram(pApp->GetMDIClient(this), this);
		if (pTangram != nullptr)
		{
			TangramCLR::TangramFrame^ pFrame = pTangram->CreateFrame(pMDIClient, L"default");
			if (pFrame != nullptr)
			{
				pFrame->ExtendXml(L"default", m_strTangramXML);
			}
			Form^ pForm = gcnew Form();
			pForm->Text = L"MDI Child Form";
			pForm->MdiParent = this;
			pForm->Show();
		}
	}
}