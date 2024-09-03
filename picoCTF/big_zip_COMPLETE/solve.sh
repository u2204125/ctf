unzip big_zip.zip
cd big_zip
find . -type f -exec cat "{}" \; | grep "{"