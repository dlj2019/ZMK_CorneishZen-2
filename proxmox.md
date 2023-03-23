### DELETTING CLUSTER - PROXMOX

LINK => https://www.youtube.com/watch?v=GSg-aeQ5gT8


In this Video, I will show you how to remove or delete Proxmox cluster. I must confess it is not so technical after all, though I had to put in some time to do the research and I found this wiki page that explains it all (https://pve.proxmox.com/mediawiki/ind...)

All the commands I used in the video are for Version 4 and newer for Version 3, please consult the document above, I will also past the commands here.

Step 1. stop the cluster file system in /etc/pve/

# service pve-cluster stop

or if you use PVE 4.0 and newer

# systemctl stop pve-cluster

Step 2. start it again but forcing local mode
# pmxcfs -l

Step 3. remove the cluster config

# rm -f /etc/pve/cluster.conf /etc/pve/corosync.conf
# rm -f /etc/cluster/cluster.conf /etc/corosync/corosync.conf
# rm /var/lib/pve-cluster/corosync.authkey

Step 4. stop the cluster file system again
 - on PVE 3.4 and earlier
# service pve-cluster stop
 -  on PVE 4.0 and newer
# systemctl stop pve-cluster

Step 5. (optional) you may have to delete the lockfile of the cluster filesystem:
# rm /var/lib/pve-cluster/.pmxcfs.lockfile

Step 6. restart pve services (or reboot)
 - on PVE 3.4 and older:
# service pve-cluster start
# service pvedaemon restart
# service pveproxy restart
# service pvestatd restart

- on pve 4.0 and newer
# systemctl start pve-cluster
# systemctl restart pvedaemon
# systemctl restart pveproxy
# systemctl restart pvestatd


===================
Proxmox Darkmode:

~# wget https://raw.githubusercontent.com/Weilbyte/PVEDiscordDark/master/PVEDiscordDark.sh
~# bash PVEDiscordDark.sh install
