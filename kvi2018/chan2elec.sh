FIB="FIB"$1

echo "--------------------------------------------------------------------"
echo "searching "$FIB" channel "$2

echo "--------------------------------------------------------------------"

NAME=$FIB"_TMLC"$2","

ROW=$(grep $NAME mapping_fiber.hh)

echo $ROW

echo "--------------------------------------------------------------------"

ELECCH=$(echo $ROW | awk '{split($0,A,"["); split(A[2],B,"]"); print B[1]/2}')
CTDC=$(echo $ROW | awk '{split($0,A,"_"); split(A[3],B,"."); print B[1]}')

CARD=$(echo $ELECCH | awk '{print int($1/16)+1}')

echo "electronic channel  " $ELECCH
echo "clock TDC           " $CTDC
echo "card                " $CARD
echo "--------------------------------------------------------------------"



