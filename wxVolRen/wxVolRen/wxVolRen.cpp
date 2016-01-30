#include "wxVolRen.h"

namespace gui
{
	IMPLEMENT_APP(wxVolRen);

	bool wxVolRen::OnInit()
	{
		if (!wxApp::OnInit())
		{
			return false;
		}

		return false;
	}

	int wxVolRen::OnExit()
	{
		int result = wxApp::OnExit();
		
		return result;
	}

} // namespace gui