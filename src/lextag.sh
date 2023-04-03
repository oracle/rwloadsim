# Copyright (c) 2023 Oracle Corportaion
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/
#
# History
#
# bengsig  19-mar-2022 Creation

# This helper script will find tags that are in .l source
# files by finding comments of this form:
# /*LEXTAG:token*/
# where token is one of the those found in the .y files
# that are typically named RWL_T_xxxxxx
#
# Note that these must be added manually, and the whole
# thing is rather primitive

# Make sure we sort binary/ascii
export LC_ALL=C

rm -f tags.nolex
mv tags tags.nolex
grep -n LEXTAG $1 |
sed 's/\([1-9][0-9]*\):.*LEXTAG:\([A-Za-z][_A-Za-z0-9]*\).*/\2	'$1'	\1;"	d/' |
sort tags.nolex - > tags
rm -f tags.nolex
