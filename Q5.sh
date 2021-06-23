#!/bin/bash
for i in `ls *.bmp`; do convert $i $i.jpg; done