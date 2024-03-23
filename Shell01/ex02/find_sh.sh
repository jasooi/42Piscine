#!/bin/sh
find -xtype f -name "*.sh" -exec basename {} ".sh" \;
