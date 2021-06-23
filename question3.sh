uid=$1

if [ $# -eq 0 ]
then
        echo "Enter logname"
        read uid
fi

ch=`who | grep $uid -c`
if [ $ch -eq 1 ]
then
        echo "Logname user loging"else
        echo "Logname user corrent not loging"
fi

echo "Total user are : `who | wc -l`"
