# RWordPad --- Independent ReactOS WordPad

# CMake minimum version
cmake_minimum_required(VERSION 3.5)

# project name and languages
project(RWordPad C RC)

if (DBG)
    add_definitions(-D_DEBUG=1)
endif()

if (MSVC)
    if (CMAKE_SYSTEM_PROCESSOR MATCHES "(x86)|(X86)")
        add_definitions(-D_X86_)
    elseif (CMAKE_SYSTEM_PROCESSOR MATCHES "(amd64)|(AMD64)")
        add_definitions(-D_AMD64_)
    else()
        message(FATAL_ERROR "Unsupportet platform")
    endif()
endif()

if (MSVC)
    set(CMAKE_EXE_LINKER_FLAGS    "${CMAKE_EXE_LINKER_FLAGS} /MANIFEST:NO")
    set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} /MANIFEST:NO")
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /MANIFEST:NO")
endif()

add_executable(wordpad WIN32
    olecallback.c
    print.c
    registry.c
    wordpad.c
    rsrc.rc
    compat/debug.c
    compat/wWinMain.c)

target_compile_definitions(wordpad PRIVATE
    UNICODE _UNICODE _CRT_SECURE_NO_WARNINGS STRSAFE_NO_DEPRECATE __REACTOS__
    RICHEDIT_CLASS20W=RICHEDIT_CLASSW
    LANGUAGE_BG_BG
    LANGUAGE_CS_CZ
    LANGUAGE_DA_DK
    LANGUAGE_DE_DE
    LANGUAGE_EL_GR
    LANGUAGE_EN_US
    LANGUAGE_ES_ES
    LANGUAGE_ET_EE
    LANGUAGE_EU_ES
    LANGUAGE_FI_FI
    LANGUAGE_FR_FR
    LANGUAGE_HE_IL
    LANGUAGE_HI_IN
    LANGUAGE_HR_HR
    LANGUAGE_HU_HU
    LANGUAGE_HY_AM
    LANGUAGE_ID_ID
    LANGUAGE_IT_IT
    LANGUAGE_JA_JP
    LANGUAGE_KO_KR
    LANGUAGE_LT_LT
    LANGUAGE_MS_MY
    LANGUAGE_NB_NO
    LANGUAGE_NL_NL
    LANGUAGE_NO_NO
    LANGUAGE_PL_PL
    LANGUAGE_PT_BR
    LANGUAGE_PT_PT
    LANGUAGE_RO_RO
    LANGUAGE_RU_RU
    LANGUAGE_SK_SK
    LANGUAGE_SL_SI
    LANGUAGE_SQ_AL
    LANGUAGE_SV_SE
    LANGUAGE_TH_TH
    LANGUAGE_TR_TR
    LANGUAGE_UK_UA
    LANGUAGE_UZ_UZ
    LANGUAGE_ZH_CN
    LANGUAGE_ZH_HK
    LANGUAGE_ZH_TW)

target_include_directories(wordpad PRIVATE ./ reactos/)
target_link_libraries(wordpad PRIVATE comdlg32 ole32 shell32 user32 gdi32 advapi32 comctl32 msvcrt kernel32)
if (MSVC)
    target_link_options(wordpad PRIVATE "/entry:wWinMainCRTStartup")
endif()
