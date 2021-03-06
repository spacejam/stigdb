/* <tools/nycr/symbol/write_flex.h> 

   Writes the flex source for the language represented by a set of nycr symbols.

   Copyright 2010-2014 Tagged
   
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
   
     http://www.apache.org/licenses/LICENSE-2.0
   
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

#pragma once

#include <tools/nycr/symbol/language.h>

namespace Tools {

  namespace Nycr {

    namespace Symbol {

      /* TODO */
      void WriteFlex(const char *root, const char *branch, const char *atom, const TLanguage *language);

    }  // Symbol

  }  // Nycr

}  // Tools

