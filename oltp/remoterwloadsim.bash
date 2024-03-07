#!/bin/bash
#
# RWP*Load Simulator - Call rwloadsime remotely
#
# Copyright (c) 2021 Oracle Corporation
# Licensed under the Universal Permissive License v 1.0
# as shown at https://oss.oracle.com/licenses/upl/
#
# History
#
# bengsig   8-nov-2023 - Creation
#
# This file is a sample of how to implement spreading of 
# oltp worker processes remotely. It will be called using 
# ssh with an unknown environment that can depend on sevaral
# factors, so ALL environment variables below must be set
# properly

# You need to copy this file to all your remote application
# servers and provide the full name to it in your implementation
# of the rwlcall function
#
# Note that things will be much easier if the home directory
# of the account you are using and the rwloadsim distribution
# are shared (e.g. via NFS) to all application servers.

# Set the RWLOADSIM_PATH such that it includes the following two
# directories on the remote system:
# the directory where a copy of {key}.rwl is found
# the oltp directory of your rwloadsim distribution
# Effectively, this is similar to your normal {key}.env file
export RWLOADSIM_PATH=/path/to/keydirectory:/path/to/rwloadsim/oltp
export RWLOLTP_NAME=key # put your project name here
# Set the following two such that it provides access to rwloadsim, sqlplus, etc:
export LD_LIBRARY_PATH=/path/to/instantclient
PATH=/path/to/rwloadsim/bin:/bin:/usr/bin:/usr/local/bin:/path/to/instantclient
# Change to the directory where {key}.rwl is found
cd /path/to/keydirectory

# finally do the actual call to rwloadsim
rwloadsim "$@"

