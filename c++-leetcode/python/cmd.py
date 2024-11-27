import os
os.system("ipconfig")
file = open("temp.txt","a")
file.write("\nMitesh")
file.close()
file = open("temp.txt","r")
print(file.read())
# os.system("cwd")