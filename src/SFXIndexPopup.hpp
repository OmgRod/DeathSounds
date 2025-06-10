#include "Geode/binding/FLAlertLayer.hpp"
#include "Geode/binding/SFXBrowserDelegate.hpp"
#include <Geode/Geode.hpp>

using namespace geode::prelude;

class SFXIndexPopup : public geode::Popup<> {
private:
    LoadingSpinner* m_loadingCircle;

protected:
    bool setup() override {
        this->setTitle("Death SFX Index");

        m_loadingCircle = LoadingSpinner::create(100.f);
        m_mainLayer->addChildAtPosition(m_loadingCircle, Anchor::Center);

        return true;
    }

public:
    static SFXIndexPopup* create() {
        auto ret = new SFXIndexPopup();
        if (ret->initAnchored(440.f, 290.f, "GJ_square02.png")) {
            ret->autorelease();
            return ret;
        }

        delete ret;
        return nullptr;
    }
};
