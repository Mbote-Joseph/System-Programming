#!/bin/bash
echo "Enter IP address"
read ipAddress
echo "`nmap -sP $ipAddress`"

