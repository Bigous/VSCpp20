# CMakeList.txt: projeto de CMake para VSC++20, incluir origem e definir
# lógica específica a um projeto aqui.
#
cmake_minimum_required (VERSION 3.8)

project ("VSC++20")

# Adicione a origem ao executável deste projeto.
add_executable (VSC++20 "VSC++20.cpp" "VSC++20.h" "dice.ixx")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET VSC++20 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.