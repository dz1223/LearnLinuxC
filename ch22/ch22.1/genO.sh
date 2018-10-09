#! /bin/sh

for name in `ls *.c`; do
	echo ${name/.c/.o}
done
