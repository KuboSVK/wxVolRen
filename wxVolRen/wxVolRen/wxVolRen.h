#ifndef WX_VOL_REN
#define WX_VOL_REN

#include <wx/app.h>

namespace gui
{
	//DECLARE_APP(wxVolRen);

	class wxVolRen : public wxApp
	{
	public:
		virtual bool OnInit() wxOVERRIDE;
		virtual int OnExit() wxOVERRIDE;
	};

} // namespace gui

#endif // !WX_VOL_REN

