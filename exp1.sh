#!/bin/bash
echo "===== System Information ====="
echo "Hostname : $(hostname)"
echo "User     : $(whoami)"
echo "Kernel   : $(uname -r)"
echo "Date     : $(date)"
echo "Uptime   :"
uptime