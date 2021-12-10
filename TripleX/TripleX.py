import subprocess
cmd = "main.cpp"
subprocess.call(["g++", cmd])
subprocess.call("./a.out")
