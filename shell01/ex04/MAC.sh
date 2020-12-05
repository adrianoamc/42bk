#!/bin/sh | sed "s/[[:space:]]//g"
ifconfig | grep "ether" | cut -c 15-