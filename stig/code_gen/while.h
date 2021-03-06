/* <stig/code_gen/while.h> 

   TODO

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

#include <stig/code_gen/function.h>
#include <stig/code_gen/inline.h>

namespace Stig {

  namespace CodeGen {

    class TWhile
        : public TInline {
      NO_COPY_SEMANTICS(TWhile);
      public:

      typedef std::shared_ptr<TWhile> TPtr;

      static TPtr New(
          const L0::TPackage *package,
          const Type::TType &ret_type,
          const TInline::TPtr &seq,
          const TFunction::TPtr &func);

      void WriteExpr(TCppPrinter &out) const;

      /* TODO */
      virtual void AppendDependsOn(std::unordered_set<TInline::TPtr> &dependency_set) const override {
        assert(this);
        dependency_set.insert(Seq);
        Seq->AppendDependsOn(dependency_set);
        dependency_set.insert(Func->GetBody());
        Func->GetBody()->AppendDependsOn(dependency_set);
      }

      private:

      TWhile(const L0::TPackage *package,
             const Type::TType &ret_type,
             const TInline::TPtr &seq,
             const TFunction::TPtr &func);

      TFunction::TPtr Func;

      TInline::TPtr Seq;

    };  // TWhile

  }  // CodeGen

}  // Stig
