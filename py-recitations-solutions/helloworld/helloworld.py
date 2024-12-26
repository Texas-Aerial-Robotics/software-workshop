# helloworld.py

#  print your greetings to the world using python
s = "Hello Beautiful from Python!"
print(f"\n{s}\n")

# Bonus : Write to a text file
# create a text file in your folder
f = open("py-recitations-solutions\helloworld\hellopy.txt","w")
f.write(s)
f.close()

f = open("py-recitations-solutions\helloworld\hellopy.txt","r")
print("from text file : ",f.read())