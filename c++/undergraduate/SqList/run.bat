@echo off
chcp 65001
cls
g++ main.cpp -o out && out || echo 编译错误
echo.