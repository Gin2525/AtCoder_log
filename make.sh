#!/bin/bash

if [ $# -ne 1 ]; then
    echo "コンテストの番号を与えてください"
    exit
fi
number="$1"
if [ ! -e "abc${number}" ]; then
    mkdir "abc$number"
else
    echo "すでにこのコンテストのディレクトリが存在しています。"
    exit
fi

declare -a alphabet_list=("a" "b" "c" "d" "e" "f") 

touch "abc${number}/Makefile"
echo -e ".PHONY: \n\tclean\n\trun\n" >>"abc${number}/Makefile"
echo -e "clean:\n\trm a.out\nrun:\n\t./a.out\n" >> "abc${number}/Makefile" 

for i in "${alphabet_list[@]}" ;do
    touch "abc${number}/$i.cpp"
    echo -e "$i:$i.cpp\n\tg++ $i.cpp\n" >>"abc${number}/Makefile"
done
