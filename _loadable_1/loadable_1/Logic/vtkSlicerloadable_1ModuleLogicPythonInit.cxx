// Generated by vtkWrapPythonInit in VTK/Wrapping
#include "vtkPython.h"
#include "vtkPythonCompatibility.h"
#include "vtkSystemIncludes.h"
// Handle compiler warning messages, etc.
#if defined( _MSC_VER ) && !defined(VTK_DISPLAY_WIN32_WARNINGS)
#pragma warning ( disable : 4706 )
#endif // Windows Warnings

extern "C" { PyObject *real_initvtkSlicerloadable_1ModuleLogicPython(const char * /*unused*/); }

#ifdef VTK_PY3K
extern  "C" { VTK_ABI_EXPORT PyObject *PyInit_vtkSlicerloadable_1ModuleLogicPython(); }

PyObject *PyInit_vtkSlicerloadable_1ModuleLogicPython()
{
  return real_initvtkSlicerloadable_1ModuleLogicPython(nullptr);
}
#else
extern  "C" { VTK_ABI_EXPORT void initvtkSlicerloadable_1ModuleLogicPython(); }

void initvtkSlicerloadable_1ModuleLogicPython()
{
  real_initvtkSlicerloadable_1ModuleLogicPython(nullptr);
}
#endif
