#!/bin/bash

DIR="$(readlink -e "$(dirname "$0" )")"

(cd $DIR && doxygen Doxyfile &> /dev/null)
(cd $DIR/doc/latex && make &> /dev/null)
mv $DIR/doc/latex/refman.pdf $DIR/doc/documentation.pdf
rm -rf $DIR/doc/latex
