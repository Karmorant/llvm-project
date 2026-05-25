//===-- VacTargetInfo.cpp - Vac Target Implementation -------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "TargetInfo/VacTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/Compiler.h"

using namespace llvm;

Target &llvm::getTheVacTarget() {
  static Target TheVacTarget;
  return TheVacTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeVacTargetInfo() {
  RegisterTarget<Triple::vac> X(getTheVacTarget(), "vac",
                                "Vac backend for LLVM course", "VAC");
}
