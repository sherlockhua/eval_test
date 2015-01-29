

include_directories(".")
include_directories("./src/")



file(GLOB CXX_SOURCES "./src/*.cpp")



HHVM_EXTENSION("eval_test" ${CXX_SOURCES})
HHVM_SYSTEMLIB("eval_test" "./src/ext_eval_test.php")

SET_TARGET_PROPERTIES("eval_test" PROPERTIES COMPILE_FLAGS "-g")
