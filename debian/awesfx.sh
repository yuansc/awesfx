#!/bin/sh

set -e

CARD=${DEVNAME##/dev/snd/hwC}
CARD=${CARD%%D2}

DEFAULTS="/etc/default/awesfx"

[ -r "$DEFAULTS" ] && . "$DEFAULTS"

# Select either card-specific soundfonts, or default ones
eval SFONTS=\${SOUNDFONTS_${CARD}:-${SOUNDFONTS}}

INC=""
for font in ${SFONTS}
do
	/usr/bin/asfxload -Dhw:${CARD},2 ${INC} ${OPTIONS} ${font}
	INC="-N"
done
