# RWP*Load Simulator
#
# Copyright (c) 2020 Oracle Corportaion
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/
#
# helper script to add tags from .yi files
#
# History
#
# bengsig 01-sep-2020 - Creation


for yi
do
  y=`basename $yi .yi`.y
  yx=`basename $yi .yi`'\.y'
  rm -f $y
  # First create a dummy .y file that the ctags command can parse
  cat << 'END' > $y
/* dummy y file */
%{

%}
%%
END
  # Append the .yi contents to it and merge to tags
  cat $yi >> $y
  ctags --excmd=pattern --append $y
  # rename the filename from .y to .yi in tags
  ex -s '+1,$ s/'$yx/$yi/ '+x' tags
  # and remove the temporary file
  rm -f $y
done
