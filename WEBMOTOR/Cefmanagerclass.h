#ifndef CEF_WINDOW_MANAGER_H
#define CEF_WINDOW_MANAGER_H

#include "include/cef_app.h"

class CefWindowManager : public CefApp {
public:
    void Initialize(int argc, char* argv[]);
    void CreateBrowser(const std::string& url);
    void Shutdown();

private:
    CefRefPtr<CefBrowser> browser_;
    IMPLEMENT_REFCOUNTING(CefWindowManager);
};

#endif // CEF_WINDOW_MANAGER_H