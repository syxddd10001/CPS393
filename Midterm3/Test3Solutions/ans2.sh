#!/bin/bash
#ASSUME correct input, for example, like testfiles/q2.in[123]
#Functions could use eval or not. Showed one version without 
#eval (DiagSum) and the other with eval (DiagSumE).

DiagSum () {
  declare -i sum=0 ; declare -i i=1
  while [ $i -le $N ] ; do
    if [ "$1" = "P" ] ; then j=$i  
    else j=$(($N-$i+1))
    fi
    sum=sum+${A[$i,$j]}
    i=i+1
  done
  echo $sum
}

DiagSumE () {
  declare -i sum=0
  for i in $(eval "echo {$N..1}") ; do
    if [ "$1" = "P" ] ; then j=$i  
    else j=$(($N-$i+1))
    fi
    sum=sum+${A[$i,$j]}
  done
  echo $sum
}
    

Print () {
  #print A 
  for i in $(eval "echo {1..$N}") ; do
    for j in $(eval "echo {1..$N}") ; do
      echo -n "${A[$i,$j]}"
    done
    echo ""
  done
}

#read Matrix A
declare -A A
read N
for i in $(eval "echo {1..$N}") ; do
  for j in $(eval "echo {1..$N}") ; do
    read -n1 c
    A[$i,$j]=$c
  done
  read -n1 c  #read the newline character
done

echo "Principal diagonal sum=$(DiagSum P) "  #print principal diagonal
echo "Secondary diagonal sum=$(DiagSum S)"   #print secondary diagonal
echo "Matrix A:"
echo "$(Print)"                              #print Matrix A 
exit 0
