echo "Enter location:"
read loc
echo "Enter Directory Name:"
read d
echo "Enter file name:"
read f
mkdir /$loc/$d
echo "$d Created Successfully!"
touch /$loc/$d/$f
echo "$f crearted successfully inside $d"
