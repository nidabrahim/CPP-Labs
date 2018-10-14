

set(command "/usr/bin/cmake;-DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG:PATH=DebugLibs;-DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE:PATH=ReleaseLibs;-Dgtest_force_shared_crt=ON;-GUnix Makefiles;/home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest")
execute_process(
  COMMAND ${command}
  RESULT_VARIABLE result
  OUTPUT_FILE "/home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-configure-out.log"
  ERROR_FILE "/home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-configure-err.log"
  )
if(result)
  set(msg "Command failed: ${result}\n")
  foreach(arg IN LISTS command)
    set(msg "${msg} '${arg}'")
  endforeach()
  set(msg "${msg}\nSee also\n  /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-configure-*.log")
  message(FATAL_ERROR "${msg}")
else()
  set(msg "googletest configure command succeeded.  See also /home/youssef/ISIMA/Cpp/TP1/build/ThirdParty/src/googletest-stamp/googletest-configure-*.log")
  message(STATUS "${msg}")
endif()
