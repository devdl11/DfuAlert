#include "dfualert_controller.h"
#include <apps/i18n.h>

namespace DfuAlert
{

  static I18n::Message sDFUMessages[] = {
      I18n::Message::DFUAlert,
      I18n::Message::Alert1,
      I18n::Message::Alert2,
      I18n::Message::Alert3,
      I18n::Message::Alert4,
      I18n::Message::Alert5,
      I18n::Message::Alert6,
      I18n::Message::Alert7,
      I18n::Message::Alert8};

  static KDColor sDFUFGColors[] = {
      Palette::PrimaryText,
      Palette::PrimaryText,
      Palette::PrimaryText,
      Palette::PrimaryText,
      Palette::PrimaryText,
      Palette::PrimaryText,
      Palette::PrimaryText,
      Palette::PrimaryText,
      Palette::PrimaryText,
      Palette::PrimaryText};

  static KDColor sDFUBGColors[] = {
      Palette::BackgroundHard,
      Palette::BackgroundHard,
      Palette::BackgroundHard,
      Palette::BackgroundHard,
      Palette::BackgroundHard,
      Palette::BackgroundHard,
      Palette::BackgroundHard,
      Palette::BackgroundHard,
      Palette::BackgroundHard,
      Palette::BackgroundHard};

  DfuAlertController::DfuAlertController() : ViewController(nullptr),
                                             m_messageView(sDFUMessages, sDFUFGColors, sDFUBGColors, 10)
  {
  }

}
