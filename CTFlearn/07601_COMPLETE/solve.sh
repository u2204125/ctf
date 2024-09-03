#file AVT.png
#binwalk AVT.png
binwalk -e AVT.png
cd _AVT.png.extracted
ls
#xdg-open .
#looked inside the zips in thunar
cd Secret\ Stuff\ .../
ls
cd Dont\'t Open\ This\ .../ #cd "Dont't\ Open\ This\ ..."/
ls
#file I\ Warned\ You.jpeg
strings I\ Warned\ You.jpeg | grep -i "CTF"