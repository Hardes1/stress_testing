@echo off
g++ -w -o ..\bin\fast.exe fast.cpp
g++ -w -o ..\bin\slow.exe slow.cpp
g++ -w -o ..\bin\gen.exe gen.cpp

set /a i=0
    :check
    set /a i+=1
    :: creating a test
    ..\bin\gen.exe > ..\IO\input.txt
    :: starting fast solution with bug
    ..\bin\fast.exe < ..\IO\input.txt > ..\IO\fastoutput.txt
    if %ERRORLEVEL% neq 0 (
        echo Runtime Error
        goto ex
    )
    :: starting slow solution
    ..\bin\slow.exe < ..\IO\input.txt > ..\IO\output.txt
    if %ERRORLEVEL% neq 0 (
        echo Runtime Error
        goto ex
    )
    fc ..\IO\output.txt ..\IO\fastoutput.txt > nul
    :: ..\bin\check.exe ..\src\output.txt ..\src\solout.txt
    if ERRORLEVEL 1 (
        echo Bag has been found
        goto ex
    )
    echo Test %i% ok
    goto check
:ex