#!/bin/bash
#
# RWP*Load Simulator - make tags for oltp workload
#
# Copyright (c) 2021 Oracle Corporation
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/
#
# History
#
# bengsig  12-oct-2022  run.rwl needs -i wburst_count:=1
# bengsig  10-jan-2022  Creation

# This shell script is a simple way to create a tags file
# for the entire oltp workload for use in vi.
#
# Note that running it causes LOTS of errors, but it will 
# create a useful tagsfile.
#
# Consider this script EXPERIMENTAL!

# Simply loop through all
for x in *.rwl
do 
  # and run rwloadsim in tag creation mode
  case $x in
    create_schemas.rwl)
      # Special treatment needed to avoid abort
      rwloadsim -e -x 'string cruser_username:="dummy";' -T create_schemas.tags create_schemas.rwl
    ;;
    run.rwl)
      # Special treatment to include all code
      rwloadsim -i wburst_count:=1 -e -T `basename $x .rwl`.tags $x
    ;;
    *)
      rwloadsim -e -T `basename $x .rwl`.tags $x
    ;;
  esac
done

# Sort them
env LC_ALL=C sort -u *.tags > tags

# And remove the intermediate files
rm -f *.tags

