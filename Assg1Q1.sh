#Usama Zafar
#Assignment1 Question 1
#!/bin/sh
if ["$#" -ne 1 ]
then
#{
	echo "one and only one Argument" #print the message
	exit
#}
fi

if [ ! -d "safe_rm_recycle" ]
#{
then
	mkdir safe_rm_recycle #make new folder/Directory
#}
else
	echo "Recycling Directory already Exists"
fi

cp $1 safe_rm_recycle/
rm $1 # remove the value