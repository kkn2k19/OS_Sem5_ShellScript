echo "mycal $1 $2 $3"
case $2 in
	"+")
		echo "Result:"$(($1 + $3))
		;;
	"-")
		echo "Result:"$(($1 - $3))
		;;
	"x")
		echo "Result:"$(($1 * $3))
		;;
	"/")
		echo "Result:"$(($1 / $3))
		;;
esac

