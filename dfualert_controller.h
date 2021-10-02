#ifndef DFU_ALERT_CONTROLLER_H
#define DFU_ALERT_CONTROLLER_H

#include <escher.h>
#include "../shared/message_view.h"

namespace DfuAlert {

class DfuAlertController : public ViewController {
public:
  DfuAlertController();
  View * view() override { return &m_messageView; }
  bool handleEvent(Ion::Events::Event event) override { return false; }
private:
  MessageView m_messageView;
};

}

#endif

