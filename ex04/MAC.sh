ifconfig | grep -v 'media' | grep -e ether | awk '{print $2}'
