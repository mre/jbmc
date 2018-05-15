/*******************************************************************\

Module: JDIFF Languages

Author: Peter Schrammel

\*******************************************************************/

/// \file
/// JDIFF Languages

#ifndef CPROVER_JDIFF_JDIFF_LANGUAGES_H
#define CPROVER_JDIFF_JDIFF_LANGUAGES_H

#include <langapi/language_ui.h>
#include <goto-programs/goto_model.h>

class jdiff_languagest:public language_uit
{
public:
  explicit jdiff_languagest(
    const cmdlinet &cmdline,
    ui_message_handlert &ui_message_handler) :
  language_uit(cmdline, ui_message_handler)
  {
    register_languages();
  }

protected:
  virtual void register_languages();
};

#endif // CPROVER_JDIFF_JDIFF_LANGUAGES_H
