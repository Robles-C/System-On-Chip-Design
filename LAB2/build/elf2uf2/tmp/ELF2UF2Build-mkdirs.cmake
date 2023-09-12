# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/pico-sdk/tools/elf2uf2"
  "C:/Users/Cristian/Documents/CSUN/ECE520/520Assignments/sp23-e520-lab2-interfacing-rpi-Robles-C/build/elf2uf2"
  "C:/Users/Cristian/Documents/CSUN/ECE520/520Assignments/sp23-e520-lab2-interfacing-rpi-Robles-C/build/elf2uf2"
  "C:/Users/Cristian/Documents/CSUN/ECE520/520Assignments/sp23-e520-lab2-interfacing-rpi-Robles-C/build/elf2uf2/tmp"
  "C:/Users/Cristian/Documents/CSUN/ECE520/520Assignments/sp23-e520-lab2-interfacing-rpi-Robles-C/build/elf2uf2/src/ELF2UF2Build-stamp"
  "C:/Users/Cristian/Documents/CSUN/ECE520/520Assignments/sp23-e520-lab2-interfacing-rpi-Robles-C/build/elf2uf2/src"
  "C:/Users/Cristian/Documents/CSUN/ECE520/520Assignments/sp23-e520-lab2-interfacing-rpi-Robles-C/build/elf2uf2/src/ELF2UF2Build-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Cristian/Documents/CSUN/ECE520/520Assignments/sp23-e520-lab2-interfacing-rpi-Robles-C/build/elf2uf2/src/ELF2UF2Build-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Cristian/Documents/CSUN/ECE520/520Assignments/sp23-e520-lab2-interfacing-rpi-Robles-C/build/elf2uf2/src/ELF2UF2Build-stamp${cfgdir}") # cfgdir has leading slash
endif()
