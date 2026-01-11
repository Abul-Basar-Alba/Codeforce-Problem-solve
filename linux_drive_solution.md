sudo ntfsfix /dev/sda3 <br>
sudo mount -t ntfs-3g /dev/sda3 /mnt<br>
ls /mnt

sudo ntfsfix /dev/sda2
sudo mkdir -p /mnt/study
sudo mount -t ntfs-3g /dev/sda2 /mnt/study
ls /mnt/study

