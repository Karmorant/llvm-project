add_llvm_component_library(LLVMVacInfo
  VacTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  Vac
  )
