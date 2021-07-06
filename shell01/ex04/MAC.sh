ifconfig -a | grep -e "ether " | tr " " "\n" | grep -v -e ether | sed '/^$/d'
