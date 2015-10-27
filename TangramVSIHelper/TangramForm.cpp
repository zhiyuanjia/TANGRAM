#include "TangramForm.h"
using namespace TangramCLR;
namespace TangramVSIHelper {
	void TangramForm::ShowTangram()
	{
		this->Show();
	}

	System::Void TangramForm::TangramForm_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		Text = L"Tangram";
		TangramCLR::TangramCore^ pApp = TangramCore::GetTangramCore();
		TangramCLR::Tangram^ pTangram = pApp->CreateTangram(this->TangramPanel, this);
		if (pTangram != nullptr)
		{
			TangramCLR::TangramFrame^ pFrame = pTangram->CreateFrame(TangramPanel->Handle, L"default");
			if (pFrame != nullptr)
			{
				pFrame->ExtendXml( L"default", m_strTangramXML);
			}
		}
	}
}