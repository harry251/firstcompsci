# Using Windows Subsystem for Linux

1. Turn on "Window Subsystem for Linux":

Start Menu &rarr; Setting &rarr; Search for "Turn Windows features on or off". From that menu, check the boxes next to "Windows Subsystem for Linux" and "Virtual Machine Platform"

You'll need to reboot your computer now.

2. Go to the Microsoft Store:
Choose the Ubuntu distribution, and press "Get" and "Install" to download. 

3. After the download is finished, press "Launch".
This will Open the WSL/Ubuntu terminal and Install Ubuntu on Windows.
You will be asked to choose a username & password.

4. Install Ubuntu updates
Type these commands into your WSL terminal:

```bash
    sudo apt update
    sudo apt dist-upgrade
```
And press 'y' to continue.

During the installation process, you may be asked for permission to restart services on future upgrades without asking. It should be safe to say "yes".

5. Install the necessary packages for this course: 
```bash
    sudo apt install g++ clang gdb lldb zip valgrind
```

And press 'y' to continue.