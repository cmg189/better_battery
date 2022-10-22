#! /bin/bash

# directory where code is located
cd ~/Documents/Git/better_battery

# allows time for arduino to read battery and python to get arduino output
sleep 30

# start automation of git commands
git add log.txt

DATE=$(date)

git commit -m "Battery tested on: $DATE"

git push origin main
