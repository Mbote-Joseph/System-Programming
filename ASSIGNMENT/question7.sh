#! /bin/bash

alias allEmails=$(cat email_addresses.txt | tr -s '\n' ' ' )
Message="Inviting the you as our computing student to our 21st Open Webinar on innovation incubation scheduled for Friday, 25th June 2021 from 10:00 A.M. The Zoom link for joining in on Friday is as given below. We shall also broadcast the webinar on our youtube channel. Youtube link: https://youtu.be/ONVTA7LKMIs"
echo "$Message" | mail -s "invite to a COVID -19 programming webinar" allEmails
