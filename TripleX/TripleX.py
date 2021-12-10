import subprocess
cmd = "TripleX.cpp"
subprocess.call(["g++", cmd])
subprocess.call("./a.out")
