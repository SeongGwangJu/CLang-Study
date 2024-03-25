cmake_minimum_required(VERSION 3.25) # 최소한으로 필요한 CMake 버전 지정

project(CLang_Study C) # 프로젝트 정의 (이름: CLang_Study, 언어: C)

set(CMAKE_C_STANDARD 11) # C 언어 표준을 C11로 설정

include_directories(.) # 현재 디렉토리를 포함 디렉토리로 추가

file(GLOB SOURCE_FILES "univ/*.c") # "univ" 디렉토리에서 확장자가 .c인 모든 파일을 탐색하여 SOURCE_FILES 변수에 저장

foreach(source_file ${SOURCE_FILES}) # SOURCE_FILES 변수에 저장된 모든 파일에 대해 반복
    get_filename_component(executable_name ${source_file} NAME_WE) # 각 파일의 이름에서 확장자를 제외한 부분을 추출하여 executable_name 변수에 저장
    add_executable(${executable_name} ${source_file} ) # 각 .c 파일에 대해 해당 파일의 이름을 사용하여 실행 파일을 생성
endforeach()