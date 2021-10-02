#ifndef DFU_ALERT_APP_H
#define DFU_ALERT_APP_H

#include "escher/include/escher/app.h"
#include "dfualert_controller.h"
#include "../shared/shared_app.h"

namespace DfuAlert {

class App : public ::App {
public:
  class Descriptor : public ::App::Descriptor {
  public:
    I18n::Message name() override;
    I18n::Message upperName() override;
  };
  class Snapshot : public ::SharedApp::Snapshot {
  public:
    App * unpack(Container * container) override;
    Descriptor * descriptor() override;
  };
  bool processEvent(Ion::Events::Event) override;
private:
  App(Snapshot * snapshot);
  DfuAlertController m_dfualertController;
};

}

#endif
