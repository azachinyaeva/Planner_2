cmake_minimum_required (VERSION 3.8)

project ("PlannerII")

add_executable (PlannerII "Planner II.cpp" "Planner.cpp" "Planner.h" "Lists.cpp" "Lists.h" "Subjects.h")

target_compile_features("PlannerII" PRIVATE cxx_std_17)
