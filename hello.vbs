' In windows there are teo types of scripts
' 1. wscript -> gui based (taskmanager, notepad, calculator)
' 2. cscript -> terminal based (powershell,cmd,whoami,netsh)
Set ws = CreateObject("wscript.shell") 

' accessing the run b

' creating a delay of 1 sec
wscript.sleep(5000)

' injecting keystroke
ws.sendkeys("Hello, World")