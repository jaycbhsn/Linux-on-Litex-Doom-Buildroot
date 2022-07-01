#!/bin/sh
# chkconfig: 2345 20 80
# description: Description comes here....

# Source function library.
LOOP=1
start() {
    while [ $LOOP -eq 1 ] 
		do
			chocolate-doom -2 -nosound -nokeyboard -nomouse
		done
}

stop() {
	LOOP = 0
    # code to stop app comes here 
    # example: killproc program_name
}

case "$1" in 
    start)
       start
       ;;
    stop)
       stop
       ;;
    restart)
       stop
       start
       ;;
    status)
       # code to check status of app comes here 
       # example: status program_name
       ;;
    *)
       echo "Usage: $0 {start|stop|status|restart}"
esac
