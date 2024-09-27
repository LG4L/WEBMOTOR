#include "CefWindowManager.h"

void CefWindowManager::Initialize(int argc, char* argv[]) {
    CefEnableHighDPISupport();
    CefMainArgs main_args(GetModuleHandle(NULL));
    CefRefPtr<CefApp> app = this;

    CefSettings settings;
    CefInitialize(main_args, settings, app, nullptr);
}

void CefWindowManager::CreateBrowser(const std::string& url) {
    CefWindowInfo window_info;
    window_info.SetAsPopup(NULL, "My CEF Window");

    CefBrowserSettings browser_settings;
    CefRefPtr<CefClient> client = nullptr; // Vous pouvez créer un client personnalisé si nécessaire
    CefBrowserHost::CreateBrowserSync(window_info, client, url, browser_settings, nullptr);
}

void CefWindowManager::Shutdown() {
    CefShutdown();
}