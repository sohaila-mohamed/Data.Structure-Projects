cmake_minimum_required(VERSION 3.5 )

### c++11 standards
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project( batman)

include_directories( libarary )

### Generate executables
add_executable( StockSpan apps/a1_stock_span.cpp )
add_executable( BalancedParentheses apps/a2_balanced_parentheses.cpp )
add_executable( AwesomeApplication apps/a3_awesome_application.cpp )
add_executable(sbe201_test_tree apps/test_tree.cpp)
add_executable(sbe201_unique_words apps/unique_words.cpp)
add_executable(sbe201_count_words apps/count_words.cpp)
add_executable(sbe201_count_dna apps/countDNA.cpp)
add_executable( AnalyzeDNA apps/analyzeDNA.cpp )
add_executable( AnalyzeECG apps/analyzeECG.cpp )
add_executable( Calculator apps/calculator.cpp )
add_executable( Heron apps/heron.cpp )


