add_llvm_component_library(LLVMVacDesc
  VacMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  VacInfo

  ADD_TO_COMPONENT
  Vac
  )
