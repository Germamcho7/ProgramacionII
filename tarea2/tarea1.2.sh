#!/bin/bash
function nombres() {
	for PUTITO in  $@
	do
	echo "$PUTITO"
	done
}
nombres $@
