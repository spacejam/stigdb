/* <tools/nycr/operator.h> 

   A declaration of a operator of token.

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

#include <base/no_copy_semantics.h>
#include <tools/nycr/atom.h>
#include <tools/nycr/symbol/operator.h>

namespace Tools {

  namespace Nycr {

    /* TODO */
    class TPrecLevel;

    /* TODO */
    class TOperator
        : public TAtom {
      NO_COPY_SEMANTICS(TOperator);
      public:

      /* TODO */
      TOperator(const Syntax::TOper *decl);

      /* TODO */
      virtual void ForEachRef(const std::function<void (TAnyRef &)> &cb);

      /* TODO */
      virtual Symbol::TAtom *GetSymbolAsAtom() const;

      /* TODO */
      Symbol::TOperator *GetSymbolAsOperator() const {
        assert(this);
        assert(Symbol);
        return Symbol;
      }

      private:

      /* TODO */
      virtual bool Build(int pass);

      /* TODO */
      TRef<TPrecLevel> PrecLevel;

      /* TODO */
      Symbol::TOperator::TAssoc Assoc;

      /* TODO */
      Symbol::TOperator *Symbol;

    };  // TOperator

    /* TODO */
    template <>
    struct TDecl::TInfo<TOperator> {
      static const char *Name;
    };

  }  // Nycr

}  // Tools

