#!/bin/sh


echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo "// ======================================================================= //"
echo "//                                LEVEL 0                                  //"
echo "// ======================================================================= //"
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo
echo
echo
echo "==>   Length: 0  ;   Height: 0  ;   Density: 1  <=="
echo
perl *.pl 0 0 1 | time ./bsq

echo
echo
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo "// ======================================================================= //"
echo "//                                LEVEL 1                                  //"
echo "// ======================================================================= //"
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo
echo
echo
echo "==>   Length: 1  ;   Height: 1  ;   Density: 1  <=="
echo
perl *.pl 1 1 1 | time ./bsq
echo
echo
echo "==>   Length: 1  ;   Height: 1  ;   Density: 3  <=="
echo
perl *.pl 1 1 3 | time ./bsq

echo
echo
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo "// ======================================================================= //"
echo "//                                LEVEL 2                                  //"
echo "// ======================================================================= //"
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo
echo
echo
echo "==>   Length: 1  ;   Height: 2  ;   Density: 1  <=="
echo
perl *.pl 1 2 1 | time ./bsq
echo
echo
echo "==>   Length: 1  ;   Height: 2  ;   Density: 2  <=="
echo
perl *.pl 1 2 2 | time ./bsq
echo
echo
echo "==>   Length: 1  ;   Height: 2  ;   Density: 3  <=="
echo
perl *.pl 1 2 3 | time ./bsq

echo
echo
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo "// ======================================================================= //"
echo "//                                LEVEL 3                                  //"
echo "// ======================================================================= //"
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo
echo
echo
echo "==>   Length: 5  ;   Height: 5  ;   Density: 1  <=="
echo
perl *.pl 5 5 1 | time ./bsq
echo
echo
echo "==>   Length: 5  ;   Height: 5  ;   Density: 2  <=="
echo
perl *.pl 5 5 2 | time ./bsq
echo
echo
echo "==>   Length: 5  ;   Height: 5  ;   Density: 3  <=="
echo
perl *.pl 5 5 3 | time ./bsq

echo
echo
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo "// ======================================================================= //"
echo "//                                LEVEL 4                                  //"
echo "// ======================================================================= //"
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo
echo
echo
echo "==>   Length: 10  ;   Height: 10  ;   Density: 1  <=="
echo
perl *.pl 10 10 1 | time ./bsq
echo
echo
echo "==>   Length: 10  ;   Height: 10  ;   Density: 2  <=="
echo
perl *.pl 10 10 2 | time ./bsq
echo
echo
echo "==>   Length: 10  ;   Height: 10  ;   Density: 3  <=="
echo
perl *.pl 10 10 3 | time ./bsq


echo
echo
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo "// ======================================================================= //"
echo "//                                LEVEL 5                                  //"
echo "// ======================================================================= //"
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo
echo
echo
echo "==>   Length: 20  ;   Height: 20  ;   Density: 1  <=="
echo
perl *.pl 20 20 1 | time ./bsq
echo
echo
echo "==>   Length: 20  ;   Height: 20  ;   Density: 2  <=="
echo
perl *.pl 20 20 2 | time ./bsq
echo
echo
echo "==>   Length: 20  ;   Height: 20  ;   Density: 3  <=="
echo
perl *.pl 20 20 3 | time ./bsq

echo
echo
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo "// ======================================================================= //"
echo "//                                LEVEL 6                                  //"
echo "// ======================================================================= //"
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo
echo
echo
echo "==>   Length: 40  ;   Height: 40  ;   Density: 1  <=="
echo
perl *.pl 40 40 1 | time ./bsq
echo
echo
echo "==>   Length: 40  ;   Height: 40  ;   Density: 2  <=="
echo
perl *.pl 40 40 2 | time ./bsq
echo
echo
echo "==>   Length: 40  ;   Height: 40  ;   Density: 3  <=="
echo
perl *.pl 40 40 3 | time ./bsq


echo
echo
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo "// ======================================================================= //"
echo "//                                LEVEL 7                                  //"
echo "// ======================================================================= //"
echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
echo
echo
echo
echo "==>   Length: 100  ;   Height: 100  ;   Density: 1  <=="
echo
perl *.pl 100 100 1 | time ./bsq
echo
echo
echo "==>   Length: 100  ;   Height: 100  ;   Density: 2  <=="
echo
perl *.pl 100 100 2 | time ./bsq
echo
echo
echo "==>   Length: 100  ;   Height: 100  ;   Density: 3  <=="
echo
perl *.pl 100 100 3 | time ./bsq



# echo
# echo
# echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
# echo "// ======================================================================= //"
# echo "//                               FINAL BOSS - I                               //"
# echo "// ======================================================================= //"
# echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
# echo
# echo
# echo
# echo "==>   Length: 1000  ;   Height: 1000  ;   Density: 3  <=="
# echo
# perl *.pl 1000 1000 3 | time ./bsq


# echo
# echo
# echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
# echo "// ======================================================================= //"
# echo "//                               FINAL BOSS - I                               //"
# echo "// ======================================================================= //"
# echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
# echo
# echo
# echo
# echo "==>   Length: 1000  ;   Height: 1000  ;   Density: 3  <=="
# echo
# perl *.pl 1000 1000 45 | time ./bsq


# echo
# echo
# echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
# echo "// ======================================================================= //"
# echo "//                               FINAL BOSS - I                               //"
# echo "// ======================================================================= //"
# echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
# echo
# echo
# echo
# echo "==>   Length: 2000  ;   Height: 2000  ;   Density: 3  <=="
# echo
# perl *.pl 2000 2000 3 | time ./bsq



# echo
# echo
# echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
# echo "// ======================================================================= //"
# echo "//                               FINAL BOSS - II                               //"
# echo "// ======================================================================= //"
# echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
# echo
# echo
# echo
# echo "==>   Length: 4000  ;   Height: 4000  ;   Density: 3  <=="
# echo
# perl *.pl 4000 4000 3 | time ./bsq



# echo
# echo
# echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
# echo "// ======================================================================= //"
# echo "//                               FINAL BOSS - III                               //"
# echo "// ======================================================================= //"
# echo "// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //"
# echo
# echo
# echo
# echo "==>   Length: 10000  ;   Height: 10000  ;   Density: 3  <=="
# echo
# perl *.pl 10000 10000 3 | time ./bsq
