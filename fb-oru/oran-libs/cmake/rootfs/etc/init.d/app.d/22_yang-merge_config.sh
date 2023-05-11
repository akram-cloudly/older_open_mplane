#!/bin/sh

# set -e

SYSREPOCFG=/usr/local/bin/sysrepocfg
KS_KEY_NAME=genkey

start()
{

# check that there is no listen/Call Home configuration yet
SERVER_CONFIG=`$SYSREPOCFG -X -x "/ietf-netconf-server:netconf-server/listen/endpoint[1]/name | /ietf-netconf-server:netconf-server/call-home/netconf-client[1]/name"`
if [ ! -z "$SERVER_CONFIG" ]; then
    exit
fi

# import default config
CONFIG="<netconf-server xmlns=\"urn:ietf:params:xml:ns:yang:ietf-netconf-server\">
    <listen>
        <endpoint>
            <name>default-ssh</name>
            <ssh>
                <tcp-server-parameters>
                    <local-address>0.0.0.0</local-address>
                    <keepalives>
                        <idle-time>1</idle-time>
                        <max-probes>10</max-probes>
                        <probe-interval>5</probe-interval>
                    </keepalives>
                </tcp-server-parameters>
                <ssh-server-parameters>
                    <server-identity>
                        <host-key>
                            <name>default-key</name>
                            <public-key>
                                <keystore-reference>$KS_KEY_NAME</keystore-reference>
                            </public-key>
                        </host-key>
                    </server-identity>
                    <client-authentication>
                        <supported-authentication-methods>
                            <publickey/>
                            <passsword/>
                            <other>interactive</other>
                        </supported-authentication-methods>
                        <users/>
                    </client-authentication>
                </ssh-server-parameters>
            </ssh>
        </endpoint>
    </listen>
</netconf-server>"
TMPFILE=`mktemp -u`
printf -- "$CONFIG" > $TMPFILE
# apply it to startup and running
$SYSREPOCFG --edit=$TMPFILE -d startup -f xml -m ietf-netconf-server -v2
$SYSREPOCFG -C startup -m ietf-netconf-server -v2
# remove the tmp file
rm $TMPFILE

}

stop()
{
	:
}


case $1 in
    start)
		start
	;;
    stop)
    	stop
	;;
    restart)
    	stop
    	sleep 1
		start
	;;
    *)
    	echo >&2 "$0 - '$1' invalid action"
	exit 2
	;;
esac



