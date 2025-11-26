@echo off

start cmd.exe 

powershell -Command "$wshell = New-Object -ComObject wscript.shell; $wshell.AppActivate('cmd.exe'); $wshell.SendKeys('{F11}')"
