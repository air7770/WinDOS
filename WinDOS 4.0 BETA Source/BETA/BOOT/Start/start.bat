@echo off

taskkill /F /IM explorer.exe

start cmd.exe 

cd ..
cd \beta

powershell -Command "$wshell = New-Object -ComObject wscript.shell; $wshell.AppActivate('cmd.exe'); $wshell.SendKeys('{F11}')"
