./a.out
EXITCODE=$?
if [ "${EXITCODE}" -eq "0" ]; then
	echo "Command returned sucessfully"
else
	echo "Command terminated with failure code: ${EXITCODE}"
fi
