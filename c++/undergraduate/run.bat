@echo off
chcp 65001 > nul
@REM cls

if "%1"=="clean" (
    del /s *.exe
    del /s *.o
    echo 清除完成
    goto eof
)

if exist out.exe (
    del out.exe
    echo exe文件已删除
)
echo 正在编译 main.cpp ...
g++ main.cpp -o out && (
    echo 编译完成 正在执行
    @REM ping 0.0 -n 2 >nul | echo .
    cls
    echo +++++++++++++++++++++
    out && echo 执行完成 ||(
        echo.
        echo +++++++++++++++++++++
        echo 程序执行出错)
) || (echo 编译出错)


:eof