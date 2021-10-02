#include "app.h"
#include <apps/i18n.h>
#include <assert.h>
#include "../apps_container.h"

namespace DfuAlert
{

  I18n::Message App::Descriptor::name()
  {
    return upperName();
  }

  I18n::Message App::Descriptor::upperName()
  {
    return I18n::Message::DFUAlert;
  }

  App *App::Snapshot::unpack(Container *container)
  {
    return new (container->currentAppBuffer()) App(this);
  }

  App::Descriptor *App::Snapshot::descriptor()
  {
    static Descriptor descriptor;
    return &descriptor;
  }

  App::App(Snapshot *snapshot) : ::App(snapshot, &m_dfualertController)
  {
  }

  bool App::processEvent(Ion::Events::Event e)
  {
    if (e.isKeyboardEvent())
    {
      AppsContainer::sharedAppsContainer()->switchTo(AppsContainer::sharedAppsContainer()->initialAppSnapshot());
      return true;
    }
    return false;
  }

}
