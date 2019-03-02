#!/bin/bash

echo -n "Enter the username: "
read username
adduser $username --home /home/$username --disabled-password --gecos GECOS 
echo "$username ALL=(ALL) NOPASSWD:ALL">>/etc/sudoers
cd /home/$username
mkdir .ssh
echo "creating .shh folder..."
cd .ssh
touch id_rsa
echo "creating id_rsa file..."
chown $username id_rsa
chmod 400 id_rsa
chown -R $username:$username /home/$username
 
