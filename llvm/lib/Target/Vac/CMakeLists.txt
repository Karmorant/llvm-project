add_llvm_component_group(Vac)

add_llvm_target(VacCodeGen
  VacTargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  VacInfo

  ADD_TO_COMPONENT
  Vac
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)
